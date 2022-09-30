#include<stdio.h>
void main()
{
    int bs,allow,hra,da,pf;
    int t_salary;
    char grade;
    printf("enter your grade in capital letter:");
    scanf("%c",&grade);
    printf("enter basic salary:");
    scanf("%d",&bs);  
    if(grade=='A')
        allow=1700;
    else if (grade=='B')
        allow=1500;    
    else
    {
      allow=1300;
    }
    hra=0.2*bs;
    da=0.5*bs;
    pf=0.11*bs;
   t_salary=bs+allow+hra+da-pf;
   printf(" total salary:%d",t_salary);
}
