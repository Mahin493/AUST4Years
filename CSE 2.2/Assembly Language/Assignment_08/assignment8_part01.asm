 .MODEL SMALL
 .STACK 100H

 .DATA
   PROMPT_1  DB  'Enter the string : $'
   PROMPT_2  DB  0DH,0AH,'The string with words in reverse order : $'

   COUNT     DW  0

 .CODE
   MAIN PROC
     MOV AX, @DATA                
     MOV DS, AX

     LEA DX, PROMPT_1             
     MOV AH, 9
     INT 21H

     XOR CX, CX                  
     MOV AH, 1                   

     @INPUT:                     
       INT 21H                   

       CMP AL, 0DH               
       JE @END_INPUT              

       PUSH AX                   
       INC CX                     
     JMP @INPUT                   

     @END_INPUT:                 

     MOV BX, 50H                  

     XCHG BX, SP                  

     PUSH 0020H                  

     XCHG BX, SP                  
     INC COUNT                    

     @LOOP_1:                    
       POP DX                     

       XCHG BX, SP                

       PUSH DX                    

       XCHG BX, SP                
       INC COUNT                  
     LOOP @LOOP_1                

     LEA DX, PROMPT_2              
     MOV AH, 9
     INT 21H

     MOV CX, COUNT                
     MOV COUNT, 0                

     PUSH 0020H                   
     INC COUNT                    

     @OUTPUT:                     
       XCHG BX, SP               

       POP DX                     

       XCHG BX, SP               

       CMP DL, 20H                
       JNE @SKIP_PRINTING         

       MOV AH, 2                 

       @LOOP_2:                  
         POP DX                   
         INT 21H                  

         DEC COUNT                
       JNZ @LOOP_2               

       MOV DX, 0020H              

       @SKIP_PRINTING:           

       PUSH DX                   
       INC COUNT                  
     LOOP @OUTPUT                 

     MOV AH, 4CH                  
     INT 21H
   MAIN ENDP
 END MAIN
