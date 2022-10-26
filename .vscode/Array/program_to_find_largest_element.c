 #include<stdio.h>
void twoo(int b[],int n);
int main()
{
    int n,a[n],i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter %d element",n);
    for(i=1;i<=n;i++)
    {
       scanf("%d",&a[i]);
    }
     twoo(a,n);
}
void twoo(int b[],int n)
{
int i,j,t;
for(i=1;i<=n;i++)
{
    for(j=1;j<=n-i;j++)
    {
        if(b[j]>b[j+1])
        {
            t=b[j];
            b[j]=b[j+1];
            b[j+1]=t;
        }
    }
}
 printf(" largest element=%d",b[n]);
}