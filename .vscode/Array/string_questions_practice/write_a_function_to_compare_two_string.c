#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    int i;
    printf("Enter two string");
    gets(str1);
    gets(str2);
    i=strcmp(str1,str2);
    printf("%d",i);
}
// (-1)--string are dictionary __ORDER
// (0)..string are equal
// (1)..string are not a dictionary order..