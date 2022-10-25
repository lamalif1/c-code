#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d ar namata holo:\n");
    while (i <= 10)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
        if (i == 11)
        {
            break;
        }
    }
    return 0;
}