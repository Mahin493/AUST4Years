.MODEL SMALL
.STACK 100H
.DATA

.CODE

 MAIN PROC   
    ;READ A CHARACTER AND IF IT IS y AND Y display it
    ;OTHERWISE TERMINATE THE PROGRAM
    
    
    
    MOV AH,1
    INT 21H
    
    CMP AL,'Y'
    JE DISPLAY
    
    CMP 'y'
    JE DISPLAY 
    
    JMP RETURN
    
    
    
    
    DISPLAY:
    MOV AH,2
    MOV DL,AL
    INT 21H
              
    RETURN:
    MOV AH,4CH
    INT 21H          
    
    
    
    MAIN ENDP
 END MAIN