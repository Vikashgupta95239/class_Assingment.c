#include<stdio.h>
int main()
{

int x=5;
int *j;
j=&x;
printf("%d\n",&x);
printf("%d\n",*&x);
printf("%d %d %d\n",*j,&j,x);
printf("%d %d %d\n",j,&x,*&x);

// &x=7; error because &x is a constent so we know that left side only present constent not present 
// only present left side variable

}