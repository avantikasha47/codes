#include<stdio.h>
void main()
{
    int i,j;
    char a;
    a='A';    
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("%c",a);
        }
     a++;
    printf("\n");
}
    
}