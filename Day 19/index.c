#include <stdio.h>
int main()
{
    int n,target,low,high,mid;
    printf("Enter The Size Of The Array :- ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter The Value For The Search");
    scanf("%d",&target);
    low=0;
    high=n-1;
    while (low<=high)
    {
        mid=(low+high)/2;
    
        if (arr[mid]==target)
        {
            printf("%d found at index %d",target,mid);
            return 0;
        }
        else if (arr[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("Not Found!");


}