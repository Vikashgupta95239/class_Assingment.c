#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char str[40];
    int i,c,j;
    printf("enetr your the string ");
    gets(str);
    for(i=0;str[i];i++);
    printf("%d ",i);
}