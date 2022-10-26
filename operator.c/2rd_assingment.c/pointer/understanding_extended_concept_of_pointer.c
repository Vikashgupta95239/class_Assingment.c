#include<stdio.h>
int main()
{
int x=5,*p,**q,***r;
p=&x;
q=&p;
r=&q;

// printf("%d %d %d %d\n",q,*r,x,&p);
// printf("%d %d %d %d\n",q,*r,x,&p);
// printf("%d ",***r);
// printf("%d ",*p);
// printf("%d ",**q);
// printf("%d %d %d %d\n",q,*r,x,&p);
printf("%d %d %d %d\n",&r,**&q,r,***r);
}