#include<stdio.h>
void swap(int *p,int *q);
int main()
{
    int a,b;
    printf("enetr two number for swap");
    scanf("%d%d",&a,&b);
    printf("%d =a\n%d==b\n",a,b);
    swap(&a,&b);
     printf("%d =a\n%d==b \n",a,b);
}
void swap(int *p,int *q)
{
int c;
c=*p;
*p=*q;
*q=c;

}