#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter a year to check leap or not ");
    scanf("%d",&year);
    // //printf(n%4==0?"leap year":"not leap year");
    // if(n%400==0)
    // {
    // if(n%4==0)
    // {
    // printf(" leep year");
    // }
    // // printf("not leep year");
    // else
    // {
    // printf("not leep year");
    // }
    // }
    // else
    
    // {
    //     printf("not leep year");
    // }
    if(year%4==0&&year%100==0&&year%400==0)
printf("leap year");
else
printf("not a leap year");
getch();

}