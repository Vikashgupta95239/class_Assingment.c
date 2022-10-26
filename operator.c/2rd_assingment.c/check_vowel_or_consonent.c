#include<stdio.h>
int main()
{
    char ch;
    printf("enter a alphabet");
    scanf("%c",&ch);
    if(ch=='A'&& ch=='E'&& ch=='I'&&ch=='O'&&ch=='U'||ch=='a'&&ch=='e'&&ch=='i'&&ch=='o'&&ch=='u')
    printf(" vowel %c",ch);
    else
    printf(" consonent %c",ch);

    
}