#include<stdio.h>
int main()
{
    int a,b,i,j,m;
    //x:
    printf("enter two number upto print prime number");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
     m=0;
     for(j=2;j<=a;j++)
     {
         if(i%j==0)
         m++;
     }
     if(m==0)
     printf("%d ",i);
    }
    // goto x;
}
// #include<stdio.h>
// int main()
// {
//     int a,b,i,j;
//     //x:
//     printf("enter two number upto print prime number");
//     scanf("%d%d",&a,&b);
//     for(i=a;i<=b;i++)
//     {
//         for(j=2;j<=i;j++)
//         {
//             if(i%j==0)
//             break;
//         }
//         if(j>=i)
//         printf("%d ",i);
//     }
// }