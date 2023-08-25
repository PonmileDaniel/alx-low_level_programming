section .data
    hello_msg db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    global main
    extern printf

main:
    mov rdi, format
    mov rsi, hello_msg
    xor rax, rax
    call printf

    xor rdi, rdi
    mov rax, 60
    syscall
    ret


