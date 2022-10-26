#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
   int main()
{ system("cls");
   system("color 17");
     char str[1000];
    int i,c=0;
    while (1)
    { 
    printf("Enetr the the question\n");
    gets(str);
   for(i=0;str[i];i++)
   {  
    if(str[i]>=32&&str[i]<=47||str[i]>=58&&str[i]<=64||str[i]>=90&&str[i]<=96||str[i]>=123&&str[i]<=223)
        str[i]='_';
   }
    printf("\n%s ",str);
 printf("\n\n\n");
 getch();
}  
}

  