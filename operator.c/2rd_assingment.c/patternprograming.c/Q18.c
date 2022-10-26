#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k=0;
    for(i=1;i<=9;i++)
    {  
        //i<6?k++:k--;
         if (i>=6)
        {
            k--;
        }
        else
        {
            k++;
        }

        for(j=1;j<=5;j++)
        {
        if(j>=6-k)
        {
         printf("%d",j);
        }
        else{
        printf(" ");
        }
        }
        printf("\n");
        }
}
 