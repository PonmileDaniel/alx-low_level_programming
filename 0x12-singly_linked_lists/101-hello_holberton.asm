section .data
    hello_msg db "Hello, Holberton", 0
    format db "%s", 10, 0 ; "%s" is the format for the string, 10 is the newline, 0 terminates the format string

section .text
    global main
    extern printf

main:
    mov rdi, format
    mov rsi, hello_msg
    xor rax, rax
    call printf

    xor rdi, rdi      ; Clear RDI for the return value (0)
    mov rax, 60       ; System call number for exit
    syscall


