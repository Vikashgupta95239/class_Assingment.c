#include<stdio.h>
#include<windows.h>
int main()
{
      int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j>=9||i>=7||i==4||i==5||i<=2||j<=2||i==j)
            {
            if(j==0)
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
