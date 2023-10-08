#include <stdio.h>
int main()
{
    double a,b;
    printf("Enter Value Of A and B : ");
    scanf("%lf %lf", &a, &b);

    if (a>b)
    {
        printf("%lf is Greater",a);
    }
    else
    {
        printf("%lf is Greater",b);
    }
    
    return 0;
}