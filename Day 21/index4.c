// ZIG ZAG
#include <stdio.h>
int main()
{
    int row;
    int col;
    scanf("%d",&row);
    scanf("%d",&col);
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }

    for (int i = 0; i < row; i++)
    {
        if (i%2==0)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%d\t",arr[i][j]);
            }
            
        }
        else
        {
            for (int j = col-1; j >= 0; j--)
            {
                printf("%d\t",arr[i][j]);
            }
            
        }
        printf("\n");
    }
    
}