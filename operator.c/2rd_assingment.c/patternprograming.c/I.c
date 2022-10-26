#include<stdio.h>
#include<windows.h>
int main()
{
      int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(j==3||j==4||i<=2||i>=8)
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