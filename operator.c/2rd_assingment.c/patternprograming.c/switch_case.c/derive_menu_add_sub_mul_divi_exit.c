#include<stdio.h>
#include<stdlib.h>
int main()
{    
    char ch;
    printf("...........Menu...........\n");
    printf("Enter ..a.. for addition\n");
    printf("Enter ..b.. for subtraction\n");
    printf("Enter ..c.. for multiplication\n");
    printf("Enter ..d.. for Division\n");
    printf("Enter ..e.. for Exit\n");
    scanf("%c",&ch);
     int m,n;
     float v,k;
    switch (ch)
    {
    case 'a':
    case 'A':{
    printf("Enter two number");
     scanf("%d%d",&m,&n);
     printf("sum=%d",m+n);
        break;
    }
       case 'b':
       case 'B':{
    printf("Enter two number");
     scanf("%d%d",&m,&n);
     printf("sum=%d",m-n);
        break;
    }
       case 'c':
       case 'C':{
    printf("Enter two number");
     scanf("%d%d",&m,&n);
     printf("sum=%d",m*n);
        break;
    }
       case 'd':
       case 'D':{
    printf("Enter two number");
     scanf("%f%f",&v,&k);
     printf("Division=%f",v/k);
        break;
    }
    case 'e':
     case 'E':
    {
    exit (0);
    }
    default:
    printf("please enter valid input");
        break;
    }



}
    