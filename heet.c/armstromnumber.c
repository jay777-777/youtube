#include <stdio.h>
int main()
{
    int a, b, c, d = 0;

    printf("enter the number :");
    scanf("%d", &a);

    b = a;
    while (b != 0)
    {
        c = b % 10;
        d += c * c * c;
        b /= 10;
    }
    if (d == a)
    {
        printf("%d is yas\n", a);
    }
    else
    {
        printf("%d is no\n", a);
    }
    return 0;
}