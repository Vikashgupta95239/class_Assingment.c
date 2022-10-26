#include<stdio.h>
#include<conio.h>
int main()
{
    do
    {
    int a,b,c;
    printf("Enter Two number\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After swiping\nA=%d\nB=%d\n",a,b);
    getch();
    
    }
    while(1);
   return 0;

    }

