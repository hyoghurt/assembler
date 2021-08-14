global	_ft_write
extern	___error

section	.text
_ft_write:	mov		rax, 0x02000004
			syscall
			jc		err			;flag CF
			ret

err:		push	rbx
			mov		rbx, rax
			call	___error
			mov		[rax], rbx
			pop 	rbx
			mov		rax, -1
			ret
