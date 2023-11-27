#include <stdio.h>
void SumOfTwoNumbers(int a, int b)
{
    int sum=a+b;
    printf("Sum : %d",sum);
}
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    SumOfTwoNumbers(a,b);
}