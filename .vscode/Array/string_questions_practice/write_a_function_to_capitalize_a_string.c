#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=0,i,j;
    printf("Enetr the string");
    gets(str);
    if(str[0]>=97)
    {
        str[0]=str[0]-32;
    }
   for(i=0;str[i];i++)
   {  
    if(str[i]==32)
    { 
        if(str[i+1]>=97)
        {
            str[i+1]=str[i+1]-32;
        }
    }
   }
    printf("%s ",str);
   
}
      