#include<stdio.h>
#include<string.h>
int main()
{
    char vowel[]={'A','E','I','O','U'};
    char str[100],spr[100];
    int count,i,j;
    printf("Enetr the string to count total vowel in  string");
    gets(str);
   
   strupr(str);
    for(i=0;vowel[i];i++)
    {  count=0;
         for(j=0;str[j];j++)
         {
        if(vowel[i]==str[j])
        {
            count++;
        }
         }
         if(count>0)
        printf("%c    %d\n",vowel[i],count);
    }
}