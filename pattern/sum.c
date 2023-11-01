#include <stdio.h>

int addNumbers(int a, int b);
int main()
{
    int n1=10,n2=20,sum;
    sum = addNumbers(n1, n2);
    printf("Sum = %d",sum);
    return 0;
}

int addNumbers(int a, int b)
{
    int result;
    result = a+b;
    return result;
}