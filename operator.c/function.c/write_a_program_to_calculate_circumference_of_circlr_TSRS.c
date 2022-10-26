#include<stdio.h>
float Circumferencee(int r);
int main()
{     int n;
float m;
    printf("enter the redius of circle");
    scanf("%d",&n);
    m=Circumferencee(n);
    printf("circumference of circle =%f",m);
    return 0;

}
float Circumferencee(int r)
{
    float A;
    A=3.14*2*r;
    return A;
}



