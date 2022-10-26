#include<stdio.h>
int main()
{
int a,b,c,n;
printf("((1))--->Press for chech triangle isosceles or not\n\n");
printf("((2))--->Press for chech triangle right angled or not\n\n");
printf("((3))--->Press for chech triangle equilayeral  or not\n");
scanf("%d",&n);
switch (n)
{
case 1:
    printf("Enter the first side of triangle\n");
    scanf("%d",&a);
     printf("Enter the second side of triangle\n");
     scanf("%d",&b);
      printf("Enter the third side of triangle\n");
      scanf("%d",&c);

      if (a==b||b==c||c==a)
      {
         printf("isosceles triangle");
      }
      else
       printf("Not isosceles triangle");




    break;

case 2:
 printf("Enter the first side of triangle\n");
    scanf("%d",&a);
     printf("Enter the second side of triangle\n");
     scanf("%d",&b);
      printf("Enter the third side of triangle\n");
      scanf("%d",&c);
     if(a*a==b*b+c*c||b*b==a*a+c*c||a*a+b*b==c*c)
     {
         printf("right angle traingl");
     }
     else
     printf("not a right angle triangle");
      break;
      case 3:
 printf("Enter the first side of triangle\n");
    scanf("%d",&a);
     printf("Enter the second side of triangle\n");
     scanf("%d",&b);
      printf("Enter the third side of triangle\n");
      scanf("%d",&c);
      if(a==b==c)
      printf("equillateral triangle");
      else
       printf("not equillateral triangle");
default:
printf("you are enter invalid value try again.........");
    break;
}

}




