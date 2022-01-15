.MODEL SMALL
 .STACK 100H

 .DATA
   PROMPT_1  DB  'Enter a decimal digit string : $'
   PROMPT_2  DB  0DH,0AH,'The sum of the decimal digit string in Hex is : $'
   ILLEGAL   DB  0DH,0AH,'Illegal character. Try again : $'

   TEMP      DW  ?
   VALUE     DW  ?
   v         dw  ?

 .CODE
   MAIN PROC
     MOV AX, @DATA                
     MOV DS, AX

     LEA DX, PROMPT_1            
     MOV AH, 9
     INT 21H

     JMP @START_2                 

     @START_1:                   
       LEA DX, ILLEGAL             
       MOV AH, 9
       INT 21H

     XOR BX, BX                  
     XOR CX, CX                   

     @START_2:                    
       MOV AH, 1
       INT 21H

       INC CX                    

       CMP AL, 0DH               
       JNE @SKIP                 

       CMP CX, 1                  
       JB @START_1                
       JMP @END_INPUT             

       @SKIP:                     

       CMP AL, 30H                
       JB @START_1               

       CMP AL, 39H                
       JA @START_1                

       AND AL, 0FH                
       XOR AH, AH                 
       ADD BX, AX                 

       JMP @START_2               

     @END_INPUT:                  

     LEA DX, PROMPT_2            
     MOV AH, 9
     INT 21H

     MOV CX, 4                    
     MOV AH, 2                   

     @LOOP_1:                     
       XOR DX, DX                

       @LOOP_2:                  
         SHL BX, 1                
         RCL DL, 1                
         INC DH                   
         CMP DH, 4                
       JNE @LOOP_2                

       CMP DL, 9                  
       JBE @NUMERIC_DIGIT         
       SUB DL, 9                  
       OR DL, 40H                 
       JMP @DISPLAY               

       @NUMERIC_DIGIT:            
         OR DL, 30H               

       @DISPLAY:                  
         INT 21H                  
     LOOP @LOOP_1                 

     MOV AH, 4CH                  
     INT 21H
   MAIN ENDP   
 END MAIN