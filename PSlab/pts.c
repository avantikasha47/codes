#include<stdio.h>
void main()
{
    int x,y;
    printf("enter X coordinate:");
    scanf("%d",&x);
    printf("enter Y coordinate:");
    scanf("%d",&y);
    if(x>0&&y>0)
    printf("point in first quadrant");
    else if(x<0&&y>0)
    printf("point in second quadrant");
    else if (x<0&&y<0)
    printf("point in third quadrant");
    else if (x>0&&y<0)
    printf("point in fourth quadrant");
    else
    printf("point at origin");
}