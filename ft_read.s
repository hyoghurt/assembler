global	_ft_read
extern	___error

section .text
_ft_read:	mov		rax, 0x02000003
			syscall
			jc		err		;flag CF
			ret

err:		push	rbx
			mov		rbx, rax
			call	___error
			mov		[rax], rbx
			pop		rbx
			mov		rax, -1
			ret
