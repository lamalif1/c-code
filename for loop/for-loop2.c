# include <stdio.h>
int main ()
{
    int  m, j;
    printf("Enter a number between 10 to 99: ");
    scanf("%d", &m);

    for(j=10; j <= m; j++)
    {
            if(j % 11 == 0)
            {
                continue;
            }
            printf("%d\n",j);
    }
    return 0;
}
