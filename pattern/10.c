#include <stdio.h>
int main()
{
    int n = 5, i, j;
    for (i = n; i >= i; i--)
    {
        for (j = n; j >= i; j--)
        {
            printf("%2d", j);
        }
        printf("\n");
    }
    return 0;
}