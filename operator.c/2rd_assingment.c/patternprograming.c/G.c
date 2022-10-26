#include<stdio.h>
#include<windows.h>
int main()
{

    int i,j;
    for(i=1;i<=11;i++)
    {
        for(j=1;j<=17;j++)
        {
            if(j==1||j==2||i==10||i==11||j==10||j==11||i==5||i==6||j==16||j==17)
            {
        
            if(j>=3&&j<=9&&i==5||j>=3&&j<=9&&i==6||i>=1&&i<=4&&j==10||i>=1&&i<=4&&j==11||i>=1&&i<=4&&j==16||i>=1&&i<=4&&j==17||j>=12&&j<=15&&i==10||j>=12&&j<=15&&i==11||i==1||i==2)
            
            {

            
            printf(" ");
            }
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

