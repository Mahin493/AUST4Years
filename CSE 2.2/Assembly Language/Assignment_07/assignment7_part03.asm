                                                  .MODEL SMALL
 .STACK 100H

 .DATA
   PROMPT_1  DB  0DH,0AH,'Enter the first Hex number ( 0000 - FFFF ) : $'
   PROMPT_2  DB  0DH,0AH,'Enter the second Hex number ( 0000 - FFFF ) : $'
   PROMPT_3  DB  0DH,0AH,'The SUM of given Hex numbers in Hex form is : $'
   ILLEGAL   DB  0DH,0AH,'Illegal character. Try again.$'

   COUNT     DB  ?
   VALUE     DW  ?

 .CODE
   MAIN PROC
     MOV AX, @DATA               
     MOV DS, AX

     JMP @START_2                

     @START_1:                    
       LEA DX, ILLEGAL             
       MOV AH, 9
       INT 21H

     @START_2:                    
       LEA DX, PROMPT_1           
       MOV AH, 9
       INT 21H

       XOR BX, BX                
       MOV COUNT, 30H            

     @START_3:                    
       MOV AH, 1                  
       INT 21H                   

       CMP AL, 0DH                
       JNE @SKIP_1                

       CMP COUNT, 30H            
       JBE @START_1               
       JMP @END_1                 

       @SKIP_1:                   

       CMP AL, "A"                
       JB @DECIMAL_1              

       CMP AL, "F"                
       JA @START_1                
       ADD AL, 09H                
       JMP @OK_1                  

       @DECIMAL_1:                
         CMP AL, 30H              
         JB @START_1              

         CMP AL, 39H              
         JA @START_1              

       @OK_1:                     

       INC COUNT                  

       AND AL, 0FH                

       MOV CL, 4                 
       SHL AL, CL                

       MOV CX, 4                  

       @LOOP_1:                   
         SHL AL, 1                
         RCL BX, 1                
                                  
       LOOP @LOOP_1              

       CMP COUNT, 34H             
       JE @END_1                 
       JMP @START_3              

       @END_1:                   

       MOV VALUE, BX              

       LEA DX, PROMPT_2          
       MOV AH, 9
       INT 21H

       XOR BX, BX                 
       MOV COUNT, 30H            

       @START_4:                  
         MOV AH, 1               
         INT 21H                  

         CMP AL, 0DH              
         JNE @SKIP_2              

         CMP COUNT, 30H          
         JBE @START_1             
         JMP @END_2               

         @SKIP_2:                

         CMP AL, "A"              
         JB @DECIMAL_2           

         CMP AL, "F"             
         JA @JUMP                 
         ADD AL, 09H            
         JMP @OK_2               

         @DECIMAL_2:              
           CMP AL, 30H            
           JB @JUMP              

           CMP AL, 39H            
           JA @JUMP              
           JMP @OK_2              

         @JUMP:                  
           JMP @START_1          

         @OK_2:                  

         INC COUNT               

         AND AL, 0FH             

         MOV CL, 4               
         SHL AL, CL               

         MOV CX, 4                

         @LOOP_2:                
           SHL AL, 1              
           RCL BX, 1              
                                  
         LOOP @LOOP_2             

         CMP COUNT, 34H          
         JE @END_2                
         JMP @START_4             

       @END_2:                    

     LEA DX, PROMPT_3            
     MOV AH, 9
     INT 21H

     ADD BX, VALUE               
     JNC @SKIP                   
     MOV AH, 2                    
     MOV DL, 31H                  
     INT 21H                      
 
     @SKIP:                      

     MOV COUNT, 30H              

     @LOOP_3:                    
       XOR DL, DL                 
       MOV CX, 4                 

       @LOOP_4:                   
         SHL BX, 1                
         RCL DL, 1                
                                 
       LOOP @LOOP_4               

       MOV AH, 2                  

       CMP DL, 9                 
       JBE @NUMERIC_DIGIT         
       SUB DL, 9                 
       OR DL, 40H                 
       JMP @DISPLAY               

       @NUMERIC_DIGIT:            
         OR DL, 30H              

       @DISPLAY:                 
         INT 21H                  

       INC COUNT                 
       CMP COUNT, 34H           
       JNE @LOOP_3                

     @END:                        

     MOV AH, 4CH                 
     INT 21H
   MAIN ENDP
 END MAIN