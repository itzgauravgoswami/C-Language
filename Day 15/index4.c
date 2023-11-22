#include <stdio.h>
char charFunction(int num1, int num2)
{
    return 'a';
}
int main()
{
    char ch=charFunction(3,4);
    printf("%c",ch);
}