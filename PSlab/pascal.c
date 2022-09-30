#include<stdio.h>
void main()
{
    int i,j,n,c[50][50];
    printf("enter size of triangle:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
            {
                c[i][j]=1;
                printf("%d ",c[i][j]);

            }
            else
            {
               c[i][j]=c[i-1][j]+c[i-1][j-1];
               printf("%d ",c[i][j]);
            }
        
        }
       printf("\n");
    }
}
