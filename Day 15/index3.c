#include <stdio.h>
int sumOfTwoNumbers(int num1, int num2)
{
    // int sum=num1+num2;
    return num1 + num2;
}
int main()
{
    int a,b;
    scanf("%d %d", &a , &b);
    
    printf("Sum : %d",sumOfTwoNumbers(a,b));
}