#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j;
    printf("Enetr the string to check alphanumeric or not");
    gets(str);
    j=strlen(str);
    for(i=0;str[i];i++)
    {
        if(str[i]>=97&&str[i]<=122||str[i]>=65&&str[i]<=90);
        else
        {
        printf(" a alphanumeric string");
        break;
        }
    }

    if(i==j)
    printf(" not alphanumeric string");
}