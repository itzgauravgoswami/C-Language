// Linear Searching
#include <stdio.h>
int main()
{
    int arr[9];
    int a,b,c,d,e,f,g,h,j;
    scanf("%d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&j);
    int target=99;

    for (int i = 0; i < 9; i++)
    {
        if (arr[i]==target)
        {
            printf("%d",i);
            break;
        }
        
    }
    
}