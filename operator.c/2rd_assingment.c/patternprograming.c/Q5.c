#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {  
        for(j=1;j<=9;j++)
        {
           if(j>=i&&j<=5)
            //if(j>=1&&j<=6-i)
            //if(j>=5-i&&j<4+i)
            //if(i<=j)
              //if(j>=6-i&&j<=9)
            { 
                //Sleep(1000);
            printf("*");
            
            }
            else
            printf(" ");
        }
        printf("\n");
         

    }
}