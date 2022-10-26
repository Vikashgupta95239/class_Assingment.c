#include<stdio.h>
#include<string.h>
int main()
{   int i,j;
    char str[100];
    printf("enter the string ");
gets(str);
//j=strlen(str);
for(i=strlen(str);i>=0;i--)
{
    printf("%c",str[i]);
}
}