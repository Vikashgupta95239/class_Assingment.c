#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],str3[100],str4[100];
    int i,j;
    printf("Enetr two string ");
    gets(str1);
    gets(str2);
     strcpy(str3,str1);
      strcpy(str4,str2);
    strupr(str1);
    strupr(str2);
   j=strlen(str1);
    for(i=0;str1[i];i++)
    {
        if(str1[i]==str2[i]);
        else
        {
        printf("not equal both string");
        break;
        }

    }
    if(i==j)
    printf("Equal both string\n...%s\n...%s",str3,str4 );

}