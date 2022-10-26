#include<stdio.h>
#include<windows.h>
int main()
{
    int i,j;
    for(i=-1;i<=10;i++)
    {
        for(j=-6;j<=6;j++)
        {
            if(j==i||j==i-1||j==6||j==5)
            { Sleep(5);
            printf("*");
            }
            else
            printf(" ");

        }
        printf("\n");

    }
}