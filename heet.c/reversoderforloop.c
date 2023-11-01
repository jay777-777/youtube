#include<stdio.h>
int  main()
{
    int a,r,b=0,t;

    printf("enter the number :");
    scanf("%d",&a);

    for (t=a; a!=0; a=a/10)
    {
        r=a%10;
        b=b*10+r;
    }
    printf("the number in revese oder is :%d\n",b);





    return 0;
}