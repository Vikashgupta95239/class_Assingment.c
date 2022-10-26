#include<stdio.h>
#include<conio.h>
void main()
{  int p,t,r;
float S; 
printf("Enter the principal ammount");
scanf("%d",&p);
printf("Enter the rate of intrest");
scanf("%d",&r);
printf("Enter the time in year");
scanf("%d",&t);
S=(p*r*t)/100;
printf("Simple interest is=%f",S);
getch();
}