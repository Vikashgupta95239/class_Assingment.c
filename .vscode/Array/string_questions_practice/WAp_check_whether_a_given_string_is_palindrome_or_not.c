#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],strc[100];
    int i,j;
    printf("Enetr the string to check palindrome or not");
    gets(str);
    strcpy(strc,str);
    strrev(strc);
    j=strlen(str);
    for(i=0;str[i];i++)
    {
        if(str[i]!=strc[i])
        {
        printf("not palindrome string");
        break;
        }
    }
    if(i==j)
    printf("palindrome string");
   
}
// input laval 
// reverse laval
// both are equal known as palindrome string