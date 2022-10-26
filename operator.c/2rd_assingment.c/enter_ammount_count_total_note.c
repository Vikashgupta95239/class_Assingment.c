#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
  // a>b?a>c?printf("a is greater"):printf("cd is greater"):b>c?printf("b is greater"):printf("c is grater");
//   if(a>b)
//   {
//   if(a>c)
//       printf("%d",a);
//   }
//   else
//   {
//   if(b>c)
//   printf("%d",b);
//   else
//   printf("%d\t",c);
//   } 

  
  printf("%d",a>b?a>c ? a:c:b>c?b:c);
}