#include<stdio.h>
void main()
{
    int i,j,a;
    for(i=1;i<=5;i++)
    {    
    a=1;
        for(j=1;j<=i*2;j++)
        {
            if(a<=i)
            {
                printf("%d",a);
            }
            a++
            if(a>=i)
            {
              printf("%d",a);
            }
            a--;
        }
        printf("\n");
    }
    

}