#include<stdio.h>
int main()
{
    int y;
    printf("enter any year:");
    scanf("%d",&y);
    if(y%4==0||(y%400==0&&y%100==0))
    {
        printf(" enter year is leap year");
    }
    else
    {
    printf("enter year is not leap year");
    }
    return 0;
    
}