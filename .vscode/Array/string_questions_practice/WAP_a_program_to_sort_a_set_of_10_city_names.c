#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[10][20],str2[10][20],str3[10][20];
    printf("Enter 10 city name for sort dictionary order");
    for(i=0;i<=9;i++)
    {
        gets(str[i]);
    }
     for(i=0;i<=9;i++) 
     {
        for(j=0;j<=2;j++)
        {
            if (str[i][j]>str[i][j+1])
            {
                strcpy(str2[j],str[j+1]);
            }
            
        }
     
    printf("%s\n",str2[i]);
     }
}