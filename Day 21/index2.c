#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};

    int start=0;
    int end=5;

    while (start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
    for (int i = 0; i <=5; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    
}