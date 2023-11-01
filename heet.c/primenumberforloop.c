#include <stdio.h>
int main()
{
    int a, i, b = 0;

    printf("enter the number :");
    scanf("%d", &a);

    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            b++;
            break;
        }
    }
    if (b == 0 && a != 1)
    {
        printf("%d is a prime number.\n", a);
    }
    else
    {
        printf("%d is a not prime number.c\n", a);
    }

    return 0;
}