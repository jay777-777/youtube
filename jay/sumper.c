#include <stdio.h>

int main()
{
    int ac,eng,eco,ba,guj;
    int sum,per;
    printf("enter the numder :");
    scanf("%d",&ac);
    printf("enter the numder :");
    scanf("%d",&eng);
    printf("enter the numder :");
    scanf("%d",&eco);
    printf("enter the numder :");
    scanf("%d",&ba);
    printf("enter the numder :");
    scanf("%d",&guj);
    if((ac>eng)&&(ac>eco)&&(ac>ba)&&(ac>guj))
    {
        printf("%d is max\n",ac);
    }
    else if((eng>eco)&&(eng>ba)&&(eng>guj)&&(eng>ac))
    {
        printf("%d is max\n",eng);
    }
    else if((eco>ba)&&(eco>guj)&&(eco>ac)&&(eco>eng))
    {
        printf("%d is max\n",eco);
    }
    else if((ba>guj)&&(ba>ac)&&(ba>eng)&&(ba>eco))
    {
        printf("%d is max\n",ba);
    }
    else if((guj>ac)&&(guj>eng)&&(guj>eco)&&(guj)>ba)
    {
        printf("%d is max\n",guj);
    }

    sum =ac+eng+eco+ba+guj;
    per=sum/5;
    printf("sum = %d\n",sum);
    printf("per = %d\n",per);
    if(per>30 && per<50)
    {
        printf("grade is E");
    }
    else if (per>50 &&per<70)
    {
        printf("grade is D");
    }
    else if (per>70 && per<80)
    {
        printf("grade is C");
    }
    else if (per>80 && per<90)
    {
        printf("grade is B");
    }
    else if (per>90 && per<100)
    {
        printf("grade is A");
    }
        return 0;
}