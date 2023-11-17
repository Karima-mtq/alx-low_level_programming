section .data
    hello_msg db "Hello, Holberton", 10, 0  ; Message to print with newline character

section .text
    global _start

    ; Calling printf function
_start:
    mov     rdi, hello_msg  ; Load address of the string to be printed into rdi
    call    printf          ; Call printf function

    ; Exit the program
    mov     eax, 60         ; System call number for exit
    xor     edi, edi        ; Exit code 0
    syscall                 ; Invoke syscall to exit
