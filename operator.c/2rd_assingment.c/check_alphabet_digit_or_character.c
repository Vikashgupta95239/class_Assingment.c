#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    printf("alphabet");
    else if(ch>='0'&&ch<='9')
    printf("digit");
    else
    printf("speacial character");
}