#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,p;
    for(i=1;i<=4;i++)
    { 
        k=1;
        for(j=1;j<=7;j++)
        {
        if(j>=5-i&&j<=3+i)
        {  p:
         printf("%d",k);
         k++;
        // if(j=4)
        // k++;
        // else
        // k--;
        if(k==i)
        {
            goto p;        
        }
        }
         
         //j>=4?k--:k++;
         //j==4?k--:k++;
        
        else
        printf(" ");
        }
        printf("\n");

    }
}