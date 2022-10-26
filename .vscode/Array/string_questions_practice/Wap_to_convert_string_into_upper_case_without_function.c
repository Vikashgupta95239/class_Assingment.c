#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("enter the string to convert uppwer case");
    gets(str);
    for(i=0;str[i];i++)
    {  if(str[i]>=97&&str[i]<=122)
    {
        str[i]=str[i]-32;
    }
    }
    printf("%s",str);
    
}
// how to find relation 
// A ....ascii 65 
// a.....ascii 97
// both difference 32 
// concept of string 
// only store the ascii value in the array block 