#include <stdio.h>
int main()
{
    // AND
    int a = 37;
    int b = 22;
    int c = a & b;
    printf("%d", c);

    // OR
    int a = 49;
    int b = 152;
    int c = a | b;
    printf("%d", c);

    // XOR
    int a = 53;
    int b = 158;
    int c = a ^ b;
    printf("%d", c);
    
    // NOT / COMPLEMENT
    int a = 122;
    printf("%d", ~a);
    
    // LEFT SHIFT
    int a = 188;
    printf("%d", a << 2);
    
    // RIGHT SHIFT
    int a = 33;
    printf("%d", a >> 2);
}