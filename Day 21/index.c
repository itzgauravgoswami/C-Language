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
    
    // Print
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
}