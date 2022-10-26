#include<stdio.h>
int main()
{
    int n;
    printf("----------------------------------\n");
    printf("Enter a number Between 1 to 7\n");
     printf("----------------------------------\n");
     printf("------------------------------------ \n"); 
   
    scanf("%d",&n);
    switch (n)
    {
    case 1:
       printf("Dear sir/Mam:-Today is sunday");
        break;
     case 2:
       printf("Dear sir/Mam:-Today is Monday");
        break;
         case 3:
       printf("Dear sir/Mam:-Today is Tuesday");
        break; 
        case 4:
       printf("Dear sir/Mam:-Today is Wednesday");
        break;
         case 5:
       printf("Dear sir/Mam:-Today is Thursday");
        break;
         case 6:
       printf("Dear sir/Mam:-Today is Friday");
        break;
         case 7:
       printf("Dear sir/Mam:-Today is saturday");
        break;
    default:
    printf("you have Entered wrong choice");
        break;
    }
}