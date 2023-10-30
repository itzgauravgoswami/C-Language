#include <stdio.h>
int main()
{
    int n;
    int i=0;
    printf("Enter The Number ");
    scanf("%d",&n);
    for (i=2;i<=n;i++)
    {
        printf("%d, ",i);
        i=i+1;
    }
}