#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char str[14];
    int i;
    printf("enter the string");
    gets(str);
    for(i=0;i<=13;i++)
    printf("%c",str[i]);
    getch();
}