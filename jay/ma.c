#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num)
{
    int original = num;
    int reversed = 0;
    while (num > 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return (original == reversed);
}

// Function to check if a number is Armstrong
int isArmstrong(int num)
{
    int original = num;
    int sum = 0;
    int n = 0;
    while (num > 0)
    {
        n = num % 10;
        sum += pow(n, 3);
        num /= 10;
    }
    return (original == sum);
}

int main()
{
    int palindromeCount = 0;
    int armstrongCount = 0;
    int maxA = 0;
    int maxB = 0;

    for (int i = 1; i <= 1000; i++)
    {
        if (isPalindrome(i))
        {
            printf("%d is a palindrome number.\n", i);
            palindromeCount++;
        }

        if (isArmstrong(i))
        {
            printf("%d is an Armstrong number.\n", i);
            armstrongCount++;
        }

        int sumDigits = 0;
        int num = i;
        while (num > 0)
        {
            sumDigits += num % 10;
            num /= 10;
        }

        if (sumDigits > maxA)
        {
            maxA = sumDigits;
        }
        else if (sumDigits > maxB)
        {
            maxB = sumDigits;
        }
    }

    printf("Total palindrome numbers: %d\n", palindromeCount);
    printf("Total Armstrong numbers: %d\n", armstrongCount);
    printf("Max 'a' value: %d\n", maxA);
    printf("Max 'b' value: %d\n", maxB);

    return 0;
}
