#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter a number");
    scanf("%d",&n);
    while(n>=i)
    {
        if(i%2)
        printf("%d    ",i);
        i++; 
    }
}