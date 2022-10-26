#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (; i <= 10;)
    {
        printf("%d X %d = %d\n", n, i, i * n);
        i++;
    }
    return 0;
}