#include<stdio.h>
float area(float r)
{
float A;
A=r*r*3.14;
return A;
}
int main()
{ 

    float n,s;
    printf("enter the redius of circle");
    scanf("%f",&n);
    s=area(n);
    printf("area of circle =%f",s);

}