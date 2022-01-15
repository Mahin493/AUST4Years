.MODEL SMALL 
.STACK 100H 
.DATA 
 MSG1   DB  'ENTER 1ST CAPITAL LETTER : $' 
 MSG2   DB  'ENTER 2ND CAPITAL LETTER: $' 
 MSG3   DB  'IN ALPHABETICAL ORDER  : $' 
CHAR   DB  0DH,0AH,"$" 
.CODE 
 MAIN PROC 
      MOV AX, @DATA                
      MOV DS, AX 
      LEA DX, CHAR 
      MOV AH, 9              
      INT 21H 
      LEA DX, MSG1              
      INT 21H 
     MOV AH, 1                     
     INT 21H                       
     MOV BL, AL                    
     LEA DX, CHAR 
     MOV AH, 9              
     INT 21H 
     LEA DX, MSG2            
     INT 21H 
     MOV AH, 1                    
     INT 21H                       
     MOV BH, AL                   
     LEA DX, CHAR 
     MOV AH, 9                     
     INT 21H 
     LEA DX, MSG3              
     INT 21H 
     MOV AH, 2                     
     CMP BL, BH 
     JAE @GREAT
     MOV DL, BL 
     INT 21H 
     MOV DL, BH 
     INT 21H 
     JMP @END 
@GREAT: 
        MOV DL, BH 
        INT 21H 
        MOV DL, BL 
        INT 21H 
@END: 
       MOV AH, 4CH                  
       INT 21H 
       MAIN ENDP 
 END MAIN 
  