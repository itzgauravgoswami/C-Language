#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Size Of The Array :- ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        int current=arr[i];
        int j=i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
}