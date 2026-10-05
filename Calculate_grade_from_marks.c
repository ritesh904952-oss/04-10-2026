#include<stdio.h>

void main()

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

        if (a>100 || b>100 || c>100 || d>100 || e>100)
      {
    printf("marks can not be more than 100.");
       }

    else
    {
    f=(a+b+c+d+e)/5;
    printf("your marks are:%d\n",f);
    

    if (f<36)
    printf("you're failed.\nNO grade.");

    else if (f>=90)
    
        printf("you're passed.\ngrade:A");
     
    else if (f>=80)
    
        printf("you're passed.\ngrade:B");
    
    else if (f>=70)
    
        printf("you're passed.\ngrade:C");
    
    else if (f>=60)
        printf("you're passed.\ngrade:D");
        
    else if (f>=50)
        printf("you're passed.\ngrade:E");
         
    else if (f>=40)
        printf("you're passed.\ngrade:F");
         
    else 
        printf("you're passed.\ngrade:G");
    }
    
}