#include<stdio.h>
void Prime(int,int);
int main()
{    int x,y;
    printf("enter two number print prime number between two number ");
scanf("%d%d",&x,&y);
    Prime(x,y);  

}
    void Prime(int x,int y)
    { int a,b,i,j;
        a=x;
        b=y;

for(i=a;i<=b;i++)
{
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        break;
    }
    if(j>i/2)
    
        printf("%d ",i);
    
}
}


 





    
