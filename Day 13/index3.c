#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter a number");
    scanf("%d", &n);
    while (n!=0)
    {
        sum = sum + n % 10 ;
        n = n/10;
        printf("Sum Of Digits Of %d is %d" ,n,sum);
    }
}