#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    printf("alphabet");
    else
    printf("not alphabet");
}
