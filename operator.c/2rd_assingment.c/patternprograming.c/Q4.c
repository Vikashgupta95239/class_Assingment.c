#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=4;j++)
        { 
        if(i-1>=j)
         printf(" ");
        else
        printf("*");
        }
        printf("\n");

    }
}