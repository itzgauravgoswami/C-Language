#include <stdio.h>
int main()
{
    int num=10;
    int *numPtr = &num;
    printf("%p\n",numPtr);
    printf("%d\n",*numPtr);

    int **numPtr2=&numPtr;
    printf("%d",**numPtr2);
}