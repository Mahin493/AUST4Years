.MODEL SMALL
.STACK 100H
.DATA 

q db ?
r db ?


.CODE

MAIN PROC 
    
    MOV AX,26
    MOV BL,5
    DIV BL
    
    MOV q,AL
    MOV r,AH
    
    MOV DL,q
    ADD DL,48
    MOV AH,2
    INT 21H
    
    MOV DL,r
    ADD DL,48
    MOV AH,2
    INT 21H
    
    MOV AH,4CH
    INT 21H
     
    
    MAIN ENDP
END MAIN