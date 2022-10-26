#include<stdio.h>
 void intput(int *p,int n);
 void sort(int *s,int m);
int main()
{
    int a[10];
    // int *p;
    // p=&a[0];//p==a;
    // *p;
    //a[1]==*(a+1)
      //a[2]==*(a+2)
        //p[1]==*(p+1)
         //p[2]==*(p+2).0
          //p+i==&a[i];
          //*(p+i)==a[i]
         // intput(a,10);
          sort(a,10);
          
    //        for(int i=0;i<=10;i++)
    // {
    //     printf("%d  ",*(a+i));
    // }
}
 void intput(int *p,int n)
 {
    int i;
    printf("Enter %d number",n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",p+i);
    }
          for(int i=0;i<=10;i++)
    {
        printf("%d  ",*(p+i));
    }
 }
 void sort(int *s, int m)
 {
    int i,j,t=0;
      
    printf("Enter %d number",m);
    for(int I=1;I<=m;I++)
    {
        scanf("%d",s+I);
    }
    // for(int i=0;i<10;i++)
    // {
    //     printf("%d  ",*(s+i));
    // }
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=10-i;j++)
        {
            // if(s[j]>s[j+1])  
             if(*(s+j)>*(s+j+1))       
            {
                t=*(s+j);//s[j];
                *(s+j)=*(s+j+1);//s[j+1];
                *(s+j+1)=t;//s[j+1]=t;
            }
        }
        printf("%d  ",*(s+j));
    }
 }
      
