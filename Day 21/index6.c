// PALINDROME
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

    // Check Palindrome
    int start = 0;
    int end = size - 1;
   
    while(start < end)
    {
      if(arr[start] != arr[end])
      {
        printf("It Is Not A Palindrome!\n");
        break;
      }
      else
      {
        start++;
        end--;
      }
    }
   
    if(start >= end)
    {
      printf("It Is A Palindrome!\n");
    }

   //Printing A Character Array
    for(int i = 0; i < size; i++)
    {
        printf("%c\t", arr[i]);
    }
}