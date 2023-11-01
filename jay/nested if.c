#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, d;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    printf("d=");
    scanf("%d", , &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (a > e)
                {
                    printf("the maximum number is :%d\n", a);
                }
                else
                {
                    printf("the minimum number is:%d\n", e);
                }
            }
            else
            {
                if (d > e)
                {
                    printf("the minimum number is:%d\n", d);
                }
                else
                {
                    printf("the minimum number is:%d\n", e);
                }
            }
        }
        else
        {
            if(c>d)
            {
                if(c>e)
                {
                    printf("the minimum number is:%d\n", c);
                }
                else 
                {
                    printf("the minimum number is:%d\n", e);
                }
            }
            else 
            {
                if(d>e)
                {
                    printf("the minimum number is:%d\n", d);
                }
                else 
                {
                    printf("the minimum number is:%d\n", e);
                }
            }
        }
    }
    else 
    {
        if(b>c)
        {
            if(b>e)
            {
                printf("the minimum number is:%d\n", b);
            }
            else 
            {
                printf("the minimum number is:%d\n", e);
            }
        }
        else 
        {
            if(d>e)
            {
                printf("the minimum number is:%d\n", d);
            }
            else 
            {
                printf("the minimum number is:%d\n", e);
            }
        }
    }
    else 
    {
        if(c>d)
        {
            if(c>e)
            {
                printf("the minimum number is:%d\n", c);
            }
            else 
            {
                printf("the minimum number is:%d\n", e);
            }
        }
        else 
        {
            if(d>e)
            {
                printf("the minimum number is:%d\n", d);
            }
            else 
            {
                printf("the minimum number is:%d\n", e);
            }
        }
    }
}