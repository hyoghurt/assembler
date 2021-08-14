global	_ft_strcmp

section .text
_ft_strcmp:	mov		rcx, -1
			xor		rax, rax

loop:		inc		rcx
			xor		bx, bx
			xor		dx, dx
			mov		bl, byte[rdi + rcx]	
			mov		dl, byte[rsi + rcx]
			cmp		bl, dl
			jne		not
			cmp		dl, 0
			jne		loop
			ret

not:		cmp		bx, dx
			jl		minus		;o1 < o2
			sub		bx, dx
			mov		ax, bx
			ret

minus:		sub		dx, bx
			mov		ax, dx
			neg		rax
			ret
