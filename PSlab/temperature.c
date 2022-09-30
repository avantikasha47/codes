#include<stdio.h>
void main()
{
    int temp;
    printf("enter temperature in  degree centigrades from 0 to 100:");
    scanf("%d",&temp);
    if(temp<0)
    printf("freezing water");
    else if(temp>=0&&temp<10)
    printf("very cold weather");
    else if (temp>=10&&temp<20)
    printf("cold weather");
    else if (temp>=20&&temp<30)
    printf("normal in temparture");
    else if (temp>=30&&temp<40)
    printf("its hot");
    else
    printf("very hot");
}