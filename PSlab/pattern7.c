#include<stdio.h>
void main()
{
  int i,j,a;
  for(i=1;i<=4;i++)
  {a=i;
    for(j=4-i;j>=1;j--)
        printf(" ");
    for(j=1;j<=i;j++)
    {
        printf("%d",a);
        a--;
    }
    a=a+2;
    for(j=2;j<=i;j++)
    {
    printf("%d",a);
    a++;
    }
    printf("\n");
  }
}