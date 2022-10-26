#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char str[40];
    int i,c,j;
    printf("enetr your the string ");
    gets(str);
    for(i=0;str[i];i++)
    {
      c=1;
      if(str[i]!=-1)
      {
      for(j=i+1;str[j];j++)
      {
        if(str[i]==str[j])
        {
            c++;
            str[j]=-1;
        }
      }
      
      printf("%c.....>>>%d\n",str[i],c);
      }
    }
}

    