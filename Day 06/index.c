#include <stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    switch (n)
    {
    case 'S':
        printf("Sunday");
        break;
    case 'M':
        printf("Monday");
        break;
    case 'T':
        printf("Tuesday");
        break;
    case 'W':
        printf("Wednesday");
        break;
    case 'I':
        printf("Thursday");
        break;
    case 'F':
        printf("Friday");
        break;
    case 'L':
        printf("Saturday");
        break;
    default:
        printf("Invalid Input");
        break;
    }
}