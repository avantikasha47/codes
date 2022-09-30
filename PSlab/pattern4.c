#include<stdio.h>
void main()
{
    int i,j;
    int a;
    a=65;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",a+j-1);
    
        }
        a++;
        printf("\n");
    }
}