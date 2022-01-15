.MODEL SMALL 
.STACK 100H 
.DATA 
CR EQU 0DH 
LF EQU 0AH 
M1 DB 0DH,0AH,'ENTER A HEXA DIGIT :','$' 
M2 DB 0DH,0AH,'IN DECIMAL IT IS :' 
C1 DB ?,'$' 
M3 DB 0DH,0AH,'DO YOU WANT TO DO IT AGAIN ? Y/N:','$' 
M4 DB 0DH,0AH,'ILLEGAL CHARACTER - ENTER 0-F :','$' 
M5 DB 0DH,0AH,'IN DECIMAL IT IS :1' 
C2 DB ?,'$' 
.CODE 
MAIN PROC 
      MOV AX,@DATA     
      MOV DS,AX 
 BEGIN:  
      MOV AH,9 
    LEA DX,M1 
    INT 21H 
NEW:  
     MOV AH,1          
    INT 21H 
    CMP AL,'0'        
    JL ILLEGAL1 
    CMP AL,'9' 
    JG ILLEGAL1 
   MOV C1,AL 
    MOV AH,9 
    LEA DX,M2 
    INT 21H 
MSG:  
    MOV AH,9           
    LEA DX,M3 
    INT 21H 
    MOV AH,1           
    INT 21H 
    CMP AL,'Y' 
    JE BEGIN 
    JMP ENDD           
 ILLEGAL1:   
     CMP AL,'A'         
     JL ILLEGAL2 
    CMP AL,'F' 
    JG ILLEGAL2 
    SUB AL,11H 
    MOV C2,AL 
    MOV AH,9 
    LEA DX,M5 
    INT 21H 
    JMP MSG 
ILLEGAL2:  
    MOV AH,9 
    LEA DX,M4 
     INT 21H 
    JMP NEW 
ENDD:  
  MOV AH,4CH 
  INT 21H 
 MAIN ENDP 
      END MAIN 
 