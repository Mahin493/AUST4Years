.MODEL SMALL
.STACK 100H
.DATA


.CODE

MAIN PROC 
    
    MOV BL,48
    
    K:
    MOV AH,1
    INT 21H
    INC BL
    CMP AL,20H
    JE B
    
    LOOP K
    
    B:
    MOV DL,BL
    MOV AH,2
    INT 21H
     
    
    MAIN ENDP
END MAIN