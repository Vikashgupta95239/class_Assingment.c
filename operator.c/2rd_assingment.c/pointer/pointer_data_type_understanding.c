#include<stdio.h>
int main()
{
int a,*p;
char b,*q;
double c,*r;
// p=&b;..............that is wrong method to access because p is int type pointer having 4 byte memori 
// and b is a char type having 1 byte then one byte memory reserve and 3 byte memory loss 
// so system may be crash 
}