#include<stdio.h>
int Reverse(int );
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    Reverse(n);
}
int Reverse(int n)
{   int m;
    if(n==0)
    return 0;
     m=n%10;
     printf("%d",m);
     Reverse(n/10);

}
