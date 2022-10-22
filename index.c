#include <stdio.h>
int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("this is even number\n");
    }
    else
    {
        printf("this is odd number\n");
    }
    return 0;
}