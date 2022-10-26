#include<stdio.h>
int add(int,int);
int main()
{
    int s,x,y;
    printf("enter two number ");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("sumis=%d",s);
    return 0;

}
int add(int a,int b)
{
    return a+b;
}