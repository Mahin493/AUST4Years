.MODEL SMALL
.STACK 100H
.DATA

.CODE

 MAIN PROC 
    ;IF AX CONTAIN A NEGETIVE NUMBER PUT -1 IN BX
    ;IF AX CONTAINS 0,PUT 0 IN BX
    ;IF AX CONTAINS A POSITIVE NUMBER ,PUT 1 IN BX
    
    MOV AX,-1
    CMP AX,0
    JL NEGETIVE
    JE ZERO
    JG POSITIVE
    
    
    NEGETIVE:
    MOV BX,-1  
    JMP RETURN
    
    
    
    ZERO:
    MOV BX,0 
    JMP RETURN
    
    
    POSITIVE:
    MOV BX,1 
    
    
    RETURN:
    MOV AH,4CH
    INT 21H
    
    
    
    
    
    
    
    
    
    MAIN ENDP
 END MAIN
 