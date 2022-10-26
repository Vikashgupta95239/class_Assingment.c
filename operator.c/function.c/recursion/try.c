#include<stdio.h>
// // int f1(int);
// // int main()
// // {
// // int k;
// // k=f1(3);
// // printf("%d",k);
// // }
// // int f1(int n)
// // {
// //     int s;
// //     if(n==1)
// //     return 1;
// //     s=n+f1(n-1);
// //     return s;
// // }

//     int fun(int n)
//  {
//      if(n==1)
//      return 1;
//      else
//      return 1+fun(n-1);



// }
// int main()
// {
//     int n=3;
//     printf("%d ",fun(n));
//     return 0;
// }
// #include<stdio.h>
// void Evan(int n);
// int main()
// {
//     int n;
//     printf("Enter a number to print even number in reverse order");
//     scanf("%d",&n);
//     Evan(n);

// }
// void Evan(int n)
// {
//     if(n>=1)
//     {
//         if(n%2==0)
//             printf("%d  ",n);
//             Evan(n-1);
        
        
//     }
// }

void printhello(int n);
int main()
{
     printhello(5);
}
void printhello(int n)
{
    if(n==0)
    {
        return;
    }
    printf("hello   ");
    printhello(n-1);
}
