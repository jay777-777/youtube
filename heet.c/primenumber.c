#include <stdio.h>
int main()
{
    int n, count = 0, i = 1;
    printf("enter the number :");
    scanf("%d", &n);

    while (i <= 0)
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;
    }
    if (count == 2)
    {
        printf("prinme number");
    }
    else
    {
        printf("not prime number");
    }

    return 0;
}