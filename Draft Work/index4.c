#include <stdio.h>
int midvalue(int low, int high)
{
    int midvalue=(low+high)/2;
    return midvalue;
}
int main()
{
    int n,target,low,high;
    printf("Enter The Size Of The Array :- ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter The Value For The Search :- ");
    scanf("%d",&target);
    low=0;
    high=n-1;
    while (low<=high)
    {
        int mid=midvalue(low,high);
    
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