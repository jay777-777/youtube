#include <stdio.h>
int main()
{
    int n=5, i, j, k=1;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d ", k++);
        }
        printf("\n");
    }
    return 0;
}