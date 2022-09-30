#include<stdio.h>
void main()
{
    int AB,BC,CA;
    printf("enter first side of triangle ABC:");
    scanf("%d",&AB);
    printf("enter second side of triangle ABC:");
    scanf("%d",&BC);
    printf("enter third side of triangle ABC:");
    scanf("%d",&CA);
    if(AB==BC&&BC==CA&&CA==AB)
    printf("Triangle ABC is equilaterial triangle");
    else if ((AB==BC&&BC!=CA)||(BC==CA&&CA!=AB)||(AB==CA&&CA!=BC))
    printf("Triangle ABC is isosceles triangle");
    else
    printf("Triangle ABC scalene triangle");


}