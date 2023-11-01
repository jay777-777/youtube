#include <stdio.h>
int jay(int a)
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d X %d  = %d \n", a, i, a * i);
        i++;
    }
}
    int main()
    {
        int a;
        printf("enter value= ");
        scanf("%d", &a);
        jay(7);
        return 0;
    }