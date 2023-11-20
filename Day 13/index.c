#include <stdio.h>
int main()
{
    int a;
    printf("Enter A Number : ");
    scanf("%d", &a);

    if (a>=0)
    {
        printf(" Number is Positive" , a);
    }
    else
    {
        printf(" Number is Negative" , a);
    }

    return 0;
}