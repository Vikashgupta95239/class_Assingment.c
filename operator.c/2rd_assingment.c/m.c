#include<stdio.h>
#include<windows.h>
int main()
{
     int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=16;j++)
        {
            if(j==4||j==3||j==13||j==14||j==3+i||j==14-i||j==2+i||j==13-i)
            {
                if(j==8&&i==6||j==9&&i==6||j==7&&i==7||j==10&&i==7||j==6&&i==8||j==11&&i==8||j==5&&i==9||j==12&&i==9   || j==7&&i==6||j==10&&i==6||j==6&&i==7||j==9&&i==7||j==9&&i==8||j==10&&i==8||j==11&&i==9||j==12&&i==9||i==8&&j==5||i==5&&j==9||i==5&&j==7)
                
                    printf(" ");
                    else
            
            {
           Sleep(10);
            printf("*");
            }
            }
            else
            printf(" ");

        }
        printf("\n");

    } 
} 