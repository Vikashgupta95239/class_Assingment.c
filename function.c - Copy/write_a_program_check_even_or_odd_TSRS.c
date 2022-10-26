#include<stdio.h>
int Evan(int m);
int Evan(int m)
{

if(m%2==0)
printf("evan");
//return 1;
else
printf("odd");
return 0;

}

int main()
{   int n;
    printf("enter the number to check even or odd");
    scanf("%d",&n);
    Evan(n);
}