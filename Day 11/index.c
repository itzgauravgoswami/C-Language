#include <stdio.h>

int main() 
{
    int a,b;
    printf("\nEnter The No Of Rows :- ");
    scanf("%d",&a);
    printf("\nEnter The No Of Columns :- ");
    scanf("%d",&b);

    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < b; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
