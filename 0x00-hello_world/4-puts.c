#!/bin/bash
echo '#include <stdio.h>' > my_program.c && echo 'int main(void) { puts("Programming is like building a multilingual puzzle"); return (0); }' >> my_program.c && gcc my_program.c -o my_program && ./my_program && rm my_program.c my_program
