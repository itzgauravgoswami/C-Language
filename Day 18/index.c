// Linear Searching
#include <stdio.h>
int main()
{
    int arr[]={420,100,1,3,5,6,2,2,99};
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