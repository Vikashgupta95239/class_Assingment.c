#include<stdio.h>
#include<windows.h>
int main()
{
      int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==4||j==5||i==1||i==2)
            {
           Sleep(10);
            printf("*");
            }
            else
            printf(" ");

        }
        printf("\n");

    }
}