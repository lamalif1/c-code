#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d ar namata holo:\n", n);
    while (i <= 10)
    {
        printf("%d X %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}
