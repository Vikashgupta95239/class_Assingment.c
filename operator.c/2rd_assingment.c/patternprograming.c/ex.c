#include<stdio.h>
#include<windows.h>
int main()
{
      int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=2;j<=6;j++)
        {
            if(j==2||i==j||i==6 )
            {
           Sleep(100);
           //system("Color 23");
            printf("*");
            }
            else
            printf(" ");

        }
        printf("\n");

    }
}