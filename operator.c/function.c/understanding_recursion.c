#include<stdio.h>
void display(int n);
int main()
{
    int n=3;
    display(n);
    printf("d");

}
void display(int n)
{
    if(n<1)
    {
    return 1;
     
    }
    else
    
        printf("%d ",n);
        printf("k");
        display(n-1);
        printf("%d",n);
    
}