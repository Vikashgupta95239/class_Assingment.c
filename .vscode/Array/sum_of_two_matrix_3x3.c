#include<stdio.h>
int main()
{
   int a[3][3],b[3][3],c[3][3],i,j,k;
   printf("Enter 9 element of first matrix\n");
   for(i=0;i<3;i++)
   {   printf("rows=%d\n",i+1);
       for(j=0;j<3;j++)
       {
            printf("Element=%d %d\n",i+1,j+1);
       scanf("%d",&a[i][j]);
              }
   }
    printf("Enter 9 element of second  matrix\n");
   for(i=0;i<3;i++)
   {   printf("rows=%d\n",i+1);
       for(j=0;j<3;j++)
       { printf("Element=%d %d\n",i+1,j+1);
       scanf("%d",&b[i][j]);
       }
   }
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
     
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
    printf("%d ",c[i][j]);
}
printf("\n");
}
}
