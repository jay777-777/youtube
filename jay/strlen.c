#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    scanf(" %s ", str1);
    printf("Enter second string: ");
    scanf(" %s ", str2);

    result = strcmp(str1, str2);

    if (result == 0)
        printf("The strings are equal.\n");
    else if (result < 0)
        printf("The first string is less than the second string.\n");
    else
        printf("The first string is greater than the second string.\n");

    return 0;
}
