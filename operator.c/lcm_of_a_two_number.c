
#include <stdio.h>
int main()
{
    int a, b, i, n, m,h=0;
    printf("enter two number");
    scanf("%d%d", &a, &b);
//     for (i = 1; i <= 10; i++)
//     {
//         m=a*i;
//         for(int j=1;j<=10;j++)
//         {
//             n=b*j;
//             if(m==n)
//             {
//            printf("%d  ",n);
//            h++;
//             }
//         }     
//             if(h==1)
//             break;
//         }
       
// }
for(i=1;i<=a*b;i++)
{
    if(i%a==0&&i%b==0)
    break;
}
printf("lcm is %d",i);
}
     
