// REALLOC
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)calloc(5 , sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory Not Allocated\n");
    }
    else
    {
        printf("Memory Allocated\n");

        for (int i = 0; i < 5; i++)
        {
            ptr[i]=i;
        }
        
    }

    ptr = realloc(ptr, 10* sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", ptr[i]);
    }
    
    
}