#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n <= 200)
    {
        printf("%d\n", n);
        n++;

        if (n > 100)
        {
            break;
        }
    }
    return 0;
}