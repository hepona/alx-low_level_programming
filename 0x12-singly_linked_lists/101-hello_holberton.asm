section .data
msg db "Hello, Holberton",10
f db "%s",0
section .text
global main
extern printf
main:
push rbp
mov rbp, rsp
lea rdi, [f]
mov rsi, msg
xor eax, eax
call printf
mov rsp, rbp
pop rbp
ret
