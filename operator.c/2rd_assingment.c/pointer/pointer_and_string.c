#include<stdio.h>
#include<string.h>
void reverse(char *q);
void upper(char *q);
void compare(char *q,char *r);
int main()
{
char str[20],str1[20];
char *p,*s;
p=str;//p=&str[0];
s=str1;
printf("enter the string");
gets(p);
printf("enter 2nd  string");
gets(s);

// reverse(p);
// upper(p);
compare(p,s);
}
// void reverse(char *q)
// {
//     strrev(q);
//     puts(q);
// }
// void upper(char *q)
// {
//     strupr(q);
//     puts(q);
// }
void compare(char *q,char *r)
{
 int n;
 n=strcmp(q,r);
 printf("%d",n);

}














