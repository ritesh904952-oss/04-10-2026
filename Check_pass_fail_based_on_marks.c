#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;
        printf("enter the marks of subject a:");
        scanf("%d",&a);
         printf("enter the marks of subject b:");
        scanf("%d",&b);
         printf("enter the marks of subject c:");
        scanf("%d",&c);
         printf("enter the marks of subject d:");
        scanf("%d",&d);
         printf("enter the marks of subject e:");
        scanf("%d",&e);

        f=(a+b+c+d+e)/5;

        printf("total marks are:%d\n",f);
        
if (f>36)
printf("you're pass.");
else
printf("better luck next time.");


}