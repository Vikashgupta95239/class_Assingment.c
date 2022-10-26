#include<stdio.h>
#include<windows.h>
int main()
{
       int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(j==1||j==2||i==1||i==2||i==7||i==8||j==7||j==8)
            {Sleep(10);
            printf("$");
            }
            else
            printf(" ");

        }
        printf("\n");

    }
}