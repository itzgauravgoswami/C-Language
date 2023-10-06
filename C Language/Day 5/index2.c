#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("&d &d &d", &a, &b, &c);

    if (a>b && a>c)
    {
        printf("A is Greatest");
    }
    else if (b>a && b>c)  
    {
        printf("B is Greatest");
    }
    else
    {
        printf("C is Greatest");
    }
    
    
}