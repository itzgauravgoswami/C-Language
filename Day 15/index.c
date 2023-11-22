// Return Type (Which Gives Values In Return)
// Non - Return Type (Void) (Which Doesnt Gives Values In Return)

#include <stdio.h>
void sumOfTwoNumbers(int num1, int num2)
{
    int sum=num1+num2;
    printf("Sum : %d",sum);
}
int main()
{
    int a,b;
    scanf("%d %d", &a , &b);
    sumOfTwoNumbers(a,b);
}