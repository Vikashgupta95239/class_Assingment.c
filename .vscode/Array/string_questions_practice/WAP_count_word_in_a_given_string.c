#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=1,i;
    printf("Enetr the string for count total word");
    gets(str);
    for(i=1;str[i];i++)
    {
        if(str[i]==32&&str[i+1]>=65&&str[i+1]<=122)
        {
            count++;
        }
    }
    printf("%d  ",count);
}