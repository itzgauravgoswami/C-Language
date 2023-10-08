#include <stdio.h>
int main()
{
    int a;
    printf("Enter A Number :- ");
    scanf("%d", &a);

    if (a%2==0)
    {
        printf("%d Is Divisible By 2",a);
    }
    else
    {
        printf("%d Is Not Divisible By 2",a);
    }
    
    return 0;
}