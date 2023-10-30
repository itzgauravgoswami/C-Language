#include <stdio.h>
int main()
{
    int i = 1;
    int n;
    scanf("%d",&n);
    while (i <= n) //condition check
    {
        printf("%d, ", i);
        i=i+1; //updation
    }
}