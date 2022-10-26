#include<stdio.h>
int main()
{

int a,b,*p,*q;
p=&a;
q=&b;
printf("%d ",p+1);//6422216
printf("%d ",p+2);//6422220
printf("%d ",p+3);//6422224
printf("%d ",p+4);//6422228
printf("%d ",p-1);//6422208
printf("%d ",p-2);//6422204
printf("%d ",p-3);//6422200

printf("%d ",&p);//6422212
printf("%d ",&q);//6422208

printf("%d ",p-q);//1.......(6422212-6422208)/4=1
//in this case subtract p and q address and divided by following  type
// 1)int =(&p-&q)/4
// 2)char =(&p-&q)/1
// 3)float =(&p-&q)/4
// 4)float =(&p-&q)/8
// ""two address ko subtract kar sakte hai but not perform add multiply and divide and constent multiply""


}
