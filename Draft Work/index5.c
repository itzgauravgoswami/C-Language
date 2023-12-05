#include <stdio.h>
int matchesodd(int a, int match)
{
    match=(a+1)/2;
}
int matcheseven(int a, int match)
{
    match=a/2;
}
int main()
{
    int n,no;
    scanf("%d",&n);
    if(n%2==0)
    {
        no=matcheseven(n);
        printf("No Of Matches is",no);

    }
    else
    {
        no=matchesodd(n);
        printf("No Of Matches",no);
    }
}