global _ft_strdup
extern _malloc
extern _ft_strlen

section .text
_ft_strdup:	push	rdi					;сохранил поинтер на сринг
			call	_ft_strlen
			mov		rdi, rax			;закинул полученную длину в аргумент для маллок
			inc		rdi					;увеличил на 1 длину для маллока
			call	_malloc				;WRT ..plt это для линукс х
			pop		rdi					;забрал со стека поинтер
			cmp		rax, 0
			je		exit				;если маллок вернул 0 то выход
			mov		rcx, -1				;дали значение для итерации

loop:		inc		rcx					;прибавили к счетчику 1
			xor		bx, bx				;обнулили переменную
			mov		bl, byte [rdi + rcx];сохранили в переменную чар полученной строки
			mov		byte [rax + rcx], bl;вставили чар в позицию для выходной строки
			cmp		bl, 0
			jne		loop				;если чар не равно 0

exit:		ret
