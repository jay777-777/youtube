#include <stdio.h>
int main()
{
    int j, n, i;
    printf("enter the number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                printf(" A");
            }
            else
            {
                printf(" *");
            }
        }
        printf("\n");
    }
    return 0;
}