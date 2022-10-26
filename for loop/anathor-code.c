#include <stdio.h>
int main()
{
    int m, n;
    int i;

    printf("Enter a number: ");
    scanf("%d", &n);

    m = 0;

    for (i = 1; i <= 10; i = i + 1)
    {
        m = m + n;
        printf("%d X %d = %d\n", n, i, m);
    }

    return 0;
}