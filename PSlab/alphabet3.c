#include<stdio.h>
void main()
{
    char l;
    printf("enter any english letter:");
    scanf("%c",&l);
    if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'||l=='A'||l=='E'||l=='I'||l=='O'||l=='U')
    printf("letter is a vowel of english:");
    else
    printf("letter is a consonant of english :");
}