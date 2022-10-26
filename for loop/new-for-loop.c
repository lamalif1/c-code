#include <stdio.h>
int main()
{
    int n;
    int i;
    i = 1;
    printf("Enter a num: ");
    scanf("%d", &n);

    for (;;)
    {
        if (i > 10)
        {
            break;
        }
        printf("%d X %d = %d\n", n, i, i * n);
        i = i + 1;
    }
    return 0;
}