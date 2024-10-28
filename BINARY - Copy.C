#include <stdio.h>

int main() {
    int a = 12; // Binary: 1100
    int b = 10; // Binary: 1010

    printf("a & b = %d\n", a & b);   // AND operation
    printf("a | b = %d\n", a | b);   // OR operation
    printf("a ^ b = %d\n", a ^ b);   // XOR operation
    printf("~a = %d\n", ~a);         // NOT operation
    
    return 0;
}