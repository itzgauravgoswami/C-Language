#include <stdio.h>
int main()
{
    int n;
    int i=1;
    printf("Enter The Number :- ");
    scanf("%d",&n);
    while(i<=n)
    {
        if (i%3==0 && i%5==0)
        {
            printf("FizzBuzz\n");
        }
        else if (i%3==0)
        {
            printf("Fizz\n");
        }
        else if (i%5==0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n",i);
        }
        i++;
        
    }
    
    
    
}