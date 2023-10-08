#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    int num;
    scanf("d",&num);

    if (num>5 && num<20)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}