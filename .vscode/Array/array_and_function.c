
#include<stdio.h>
void giveMeArray(int a);
int main()
{
    int myArray[] = { 2, 3, 4 };
    giveMeArray(myArray[2]);        //Passing array element myArray[2] only.
    return 0;
}
void giveMeArray(int a)
{
    printf("%d", a);
}