#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n <= 10)
    {
        printf("%d\n", n);
        n++;
    }

    return 0;
}
