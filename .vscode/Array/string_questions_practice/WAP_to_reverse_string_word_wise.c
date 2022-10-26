#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=0,i,j;
    printf("Enetr the string  ");
    gets(str);
for(i=strlen(str);i>=0;i--)
{
    printf("%c",str[i]);
}
}