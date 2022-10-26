#include<stdio.h>
void Natural(int n);
void Natural(int n)
{
    printf("natural number   ");
for(int i=1;i<=n;i++)
{
    printf("%d ",i);
}
}
int main()
{
    int m;
    printf("enter the number for print natural number");
    scanf("%d",&m);
    Natural(m);
    return 0;

}