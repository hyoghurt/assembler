global _ft_strcpy

section .text
_ft_strcpy:	mov		rcx, -1

loop:		inc		rcx
			mov		bl, byte [rsi + rcx]
			mov		byte [rdi + rcx], bl
			cmp		bl, 0
			jne		loop
			mov		rax, rdi
			ret
