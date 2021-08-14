global _ft_strlen

section .text
_ft_strlen:	xor		rax, rax			;rax = 0

loop:		cmp		byte [rdi + rax], 0
			je		close				;o1 = o2
			inc		rax					;rax++
			jmp		loop

close:		ret
			

;rdi - first arg
;rsi - second arg
;rdx - third arg
;rcx - fourth arg
;rax - return
;rbx, rbp - no change
