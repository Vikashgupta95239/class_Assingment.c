#include<stdio.h>
#include<windows.h>
int main()
{
     int i,j;
    for(i=-2;i<=9;i++)
    {
        for(j=0;j<=17;j++)
        {
            if(j==1||j==0||j==15||j==16||j==10-i||j==6+i||j==11-i||j==5+i)
            {
                if(j==4&&i==-2||j==12&&i==-2||j==5&&i==-1||j==11&&i==-1||j==6&&i==0||j==10&&i==0||j==7&&i==1||j==9&&i==1||j==3&&i==-2||j==13&&i==-2||j==4&&i==-1||j==12&&i==-1||j==5&&i==0||j==11&&i==0||j==6&&i==1||j==10&&i==1||j==7&&i==2||j==9&&i==2)
                
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