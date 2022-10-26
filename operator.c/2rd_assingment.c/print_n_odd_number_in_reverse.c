#include<stdio.h>
int main()
{
    int n,i=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n>=i)
    {
    {   //if(n%2==0)
        if(n&1)
        printf("%d  ",n);
        n--;
    }
    // printf(" %d",2*i+1);
    // i++;
    }
}