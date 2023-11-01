#include <stdio.h>
int jay()
{
    int a, b, c, d = 0;
    printf("enter the number :");
    scanf("%d", &a);

    b = a;

    for (; b != 0;)
    {
        c = b % 10;
        d = d + c * c * c;
        b = b / 10;
    }
    if (d == a)
    {
        printf("%d is armstrong number\n", a);
    }

    else
    {
        printf("%d is not armstrong number", a);
    }
}
int main()
{
    jay();
    return 0;
}