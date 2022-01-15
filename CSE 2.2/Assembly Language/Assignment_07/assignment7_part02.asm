.MODEL SMALL
 .STACK 100H

 .DATA
   PROMPT_1  DB  'Enter the hexadecimal number ( max 4-digit ) : $'
   PROMPT_2  DB  0DH,0AH,'The equivalent 16-bit binary number is : $'
   ILLEGAL   DB  0DH,0AH,'Illegal hex number. Try again : $'

   COUNT     DB  ?
 
 .CODE
   MAIN PROC
     MOV AX, @DATA                
     MOV DS, AX

     LEA DX, PROMPT_1             
     MOV AH,9
     INT 21H

     JMP @START                   

     @START_1:                   
       LEA DX, ILLEGAL           
       MOV AH, 9
       INT 21H

     @START:                     
       XOR BX, BX                
       MOV COUNT, 30H             

     @START_2:                    
       MOV AH, 1                  
       INT 21H                    

       CMP AL, 0DH                
       JNE @SKIP                  

       CMP COUNT, 30H             
       JBE @START_1               
       JMP @END                   

       @SKIP:                     

       CMP AL, "A"                
       JB @DECIMAL               

       CMP AL, "F"                
       JA @START_1                
       ADD AL, 09H                
       JMP @OK                    

       @DECIMAL:                 
         CMP AL, 30H             
         JB @START_1              

         CMP AL, 39H              
         JA @START_1              

       @OK:                      

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
      JE @END                     
      JMP @START_2                

     @END:                       

     LEA DX, PROMPT_2             
     MOV AH, 9                    
     INT 21H

     MOV CX, 16                  
     MOV AH, 2                    

     @LOOP_2:                     
       SHL BX, 1                  
       JC @ONE                    
       MOV DL, 30H               
       JMP @DISPLAY               

       @ONE:                      
         MOV DL, 31H             

       @DISPLAY:                  
         INT 21H                 
     LOOP @LOOP_2                 

     MOV AH, 4CH                  
     INT 21H
   MAIN ENDP
 END MAIN