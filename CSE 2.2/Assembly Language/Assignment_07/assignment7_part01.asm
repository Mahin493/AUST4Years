.MODEL SMALL
 .STACK 100H

 .DATA
   PROMPT_1  DB  'Enter the character : $'
   PROMPT_2  DB  0DH,0AH,'The ASCII code of the given number in binary form is : $\'
   PROMPT_3  DB  0DH,0AH,'The number of 1 bits in ASCII code are : $\'

 .CODE
   MAIN PROC
     MOV AX, @DATA                
     MOV DS, AX

     LEA DX, PROMPT_1                
     MOV AH, 9
     INT 21H

     MOV AH, 1                   
     INT 21H

     XOR BX, BX                  
     MOV BL, AL                  

     LEA DX, PROMPT_2             
     MOV AH, 9
     INT 21H

     XOR BH, BH                  
     MOV CX, 8                    
     MOV AH, 2                   

     @OUTPUT:                    
       SHL BL, 1                  

       JNC @ZERO                  
       INC BH                     
       MOV DL, 31H                
       JMP @DISPLAY              

       @ZERO:                    
         MOV DL, 30H              

       @DISPLAY:                 
         INT 21H                  
     LOOP @OUTPUT                 

     LEA DX, PROMPT_3             
     MOV AH, 9
     INT 21H

     OR BH, 30H                   

     MOV AH, 2                    
     MOV DL, BH
     INT 21H

     MOV AH, 4CH                  
     INT 21H
   MAIN ENDP
 END MAIN