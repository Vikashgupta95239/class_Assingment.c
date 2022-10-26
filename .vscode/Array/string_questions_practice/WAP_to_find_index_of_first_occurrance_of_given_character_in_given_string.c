#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char str[40];
    char ch;
    int i,c=0,j;
    printf("enetr your the string \n");
    gets(str);
    printf("enter the latter do you want to find occurance\n");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    {
        if(ch==str[i])
        {
            c++;
            printf("index number--->%d.....%c \n",i,ch);
        }
    }
    printf("total occurance of %c......%d",ch,c);
}