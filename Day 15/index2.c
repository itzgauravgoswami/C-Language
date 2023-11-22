#include <stdio.h>
int sumOfTwoNumbers(int num1, int num2)
{
    int sum=num1+num2;
    return sum;
}
int main()
{
    int a,b;
    scanf("%d %d", &a , &b);
    int final = sumOfTwoNumbers(a,b);
    printf("Sum : %d",final);
}