#include<stdio.h>
#include<string.h>
int main()
{
char str[8][20],str1[8][20];
int i,j,count,k;
char vowel[5]={"AEIOU"};
printf("enetr the 8 sting for count the vowel");
for(i=0;i<=7;i++)
{

    gets(str[i]);
}
for(i=0;i<=7;i++)
{ 
    strcpy(str1[i],str[i]);

    strupr(str[i]);
    count=0;
    for(k=0;k<=4;k++)
    {
        
         for(j=0;str[i][j];j++)
         {
         
            if(vowel[k]==str[i][j])
            {
                count++;
            }
         }
    }
         if(count>0)
        printf("%s....total vowel......%d\n",str1[i],count);
    
     
}
}





