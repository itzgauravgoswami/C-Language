#include <stdio.h>
void update(int *a, int *b)
{
    *a=20;
    *b=30;
    printf("%d %d\n",*a,*b);
}
int main()
{
    int a=10, b=20;
    update(&a,&b);
    printf("%d %d",a,b);
}