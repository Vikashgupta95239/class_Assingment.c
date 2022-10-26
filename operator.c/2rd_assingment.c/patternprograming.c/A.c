#include<stdio.h>
#include<windows.h>
int main()
{
   


         int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=13;j++)
        {
            if(j==7+i||j==6+i||j==8-i||j==9-i||i==5)
            {
            if(j<=2&&i==5||j>=12&&i==5)
            {
            printf(" ");
            }
            else
            { Sleep(10);
            printf("*");
            }
            }
            else
            printf(" ");

        }
        printf("\n");

    }
}
