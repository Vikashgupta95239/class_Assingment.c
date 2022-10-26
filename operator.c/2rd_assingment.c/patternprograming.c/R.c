#include<stdio.h>
#include<windows.h>
int main()
{
      int i,j;
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=8;j++)
        {
            if(j<=1||i<=1||j==8||j==7||i==4||i==5||i==j+3||i==j+4)
            {
            if(i>=6&&i<=9&&j==8||i>=6&&i<=9&&j==7)
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
