// #include<stdio.h>
// int main()
// {
//     int n,count ,j,i;
//    printf("enter a number");
//    scanf("%d",&n);
//     for(i=2;i<n;i++)
//     {   count=0;
//        for(j=2;j<i;j++)
//        {
//         if(i%j==0)
//         count++;
//        }
//     if(count==0)
//     printf("%d ",i);

//     }
// }

//###############################################################################################
#include<stdio.h>
int main()
{
    int n,j,i;
   printf("enter a number");
   scanf("%d",&n);
   for(i=2;i<=n;i++)
   {
       for(j=2;j<=i;j++)
       {
           if(i%j==0)
           break;
       }
       if(j>=i)
       printf("%d ",i);
   }
}