#include<stdio.h>
#include<windows.h>
int main()
{
     int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=12;j++)
        {
            if(j<=2||i<=2||i>=9||j>=11)
            {
                if(i==1&&j==12||i==2&&j==12||i==9&&j==12||i==10&&j==12)
                printf(" ");
                else{
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