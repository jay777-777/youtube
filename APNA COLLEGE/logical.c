#include <stdio.h>

int main()
{
    printf("%d \n", 3<4 && 3<5);
    printf("%d \n", 3<4 && 5<4);

    printf("%d \n", 3<4 && 5<4);
    printf("%d \n", 3>4 && 5>4);
    printf("%d \n", 3<4 && 5<4);

    printf("%d \n", !(3<4 && 5<4));
    printf("%d \n", !(4<3 || 5<4));
    return 0;
}