#include <stdio.h>
int SumOfTwoNumbers(int a, int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int final=SumOfTwoNumbers(a,b);
    printf("%d",final);
}