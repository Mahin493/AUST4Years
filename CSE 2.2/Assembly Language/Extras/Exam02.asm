.MODEL SMALL
.STACK 100H

.DATA



.CODE

MAIN PROC
	
	
	MOV AX, 0
	
	MOV BX, 1;
	
	START:
	
	ADD AX, BX
	
	CMP BX, 41
	JE DONE
	
	ADD BX, 4
	JMP START
	
	DONE:
	
	MOV AH, 4CH
	INT 21H
	
	MAIN ENDP

END MAIN