//REVERSE CHARACTER
#include<stdio.h>

int main(){
    int size;
    scanf("%d", &size);
    char arr[size];

    //User Input
    for(int i = 0; i < size; i++)
    {
        scanf(" %c", &arr[i]);
    }


    // reversing a character array
    int start = 0;
    int end = size - 1;

    while(start < end)
    {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }

    //printing a character array
    for(int i = 0; i < size; i++)
    {
        printf("%c\t", arr[i]);
    }
}