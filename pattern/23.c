#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("+");
            }
            else
            {
                printf(" ");
            }
            if (i % 2 == 1)
            k++;
        }
        printf("\n");
    }
    return 0;
}