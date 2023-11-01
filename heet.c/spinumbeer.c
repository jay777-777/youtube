#include <stdio.h>
int main()
{
    int a, b = 0, c, d = 0;
    printf("enteer the number :");
    scanf("%d", &a);

    while (a != 0)
    {
        c = a % 10;
        b = b + c;
        d = d * c;
        a = a / 10;
    }
    if (b = d)

    {
        printf("spy number");
    }
    else
    {
        printf("not spy number");
    }

    return 0;
}