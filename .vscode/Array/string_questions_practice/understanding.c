#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
// {
//     char str[10]={'B','H','O','P','A','L'};
//     int i;
//     for(i=0;i<=9;i++)
//     printf("%c",str[i]);
//     getch();
// }
// int main()
// {
//     char str[10]={'B','H','O','P','A','L'};
//     int i;
//     for(i=0;i<=5;i++)
//     printf("%c",str[i]);
//     getch();
// }
// int main()
// {
//     char str[10]={'B','H','O','P','A','L'};
//     int i;
//     for(i=0;str[i];i++)
//     printf("%c",str[i]);
// }
// int main()
// {
//     char str[10]={'B','H','O','P','A','L'};
//     int i;
//     printf("%s",str);
// }
// int main()
// {
//    char str[40];
//     int i;
//     printf("enter your name");
//     for(i=0;str[i];i++)
//     {
//         scanf("%c",&str[i]);
//     }
//     printf("%s",str);
// }



// for scanf these three character are spacial they are not treated as data
// ENETR ,TAB,SPACE ARE DELIMITERS

// int main()
// {
//     int i;
//     char str[20];
//     printf("enetr your name");
//     for(i=0;i<=19;i++)
//     {
//         scanf("%c",&str[i]);
//         //str[i]=getche();//getch()....dont show in key but store key
//          if(str[i]==13) 
//          break; 
//     }
//      str[i]='\0';
//     printf("\n%s",str);
// }
// int main()
// { 
//     char str[40];
//     int i;
//     printf("enetr your name");
//     for(i=0;i<=39;i++)
//     {
//         str[i]=getche();
//         if(str[i]==13)
//         break;
//         if(str[i]>='a'&&str<='z'||str[i]>='A'&& str<='Z'||str[i]==32);
//         else
//         i--;
//     }
//     str[i]='\0';
//     printf("\n%s",str);
//     }
// #include<stdio.h>
// #include<string.h>
// #include<conio.h>
// int main()
// {
//     char str[40];
//     int i;
//     printf("enetr your name");
//     for(i=0;i<=39;i++)
//     {
//         str[i]=getche();
//         if(str[i]==13)
//         break;
//         if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'||str[i]==32);
//         else
//         i--; 
//     }
//     str[i]='\0';
//     printf("\n%s",str);
//     } 
{
     char str[40];
     int i;
   printf("enetr your name");
   gets(str);
   printf("%s",str);
}
