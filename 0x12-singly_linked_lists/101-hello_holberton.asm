global  main
	extern printf
main:
	mov rdi, format
	xor rax, rax
	call printf
	xor rax, rax
	ret
format: db 'Hello, holberton', 10, 0
format_len equ $ - format 
