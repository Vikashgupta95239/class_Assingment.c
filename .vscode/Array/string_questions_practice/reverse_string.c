#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("enter the string for print reverse ");
    gets(str);
    strrev(str);
    puts(str);
}