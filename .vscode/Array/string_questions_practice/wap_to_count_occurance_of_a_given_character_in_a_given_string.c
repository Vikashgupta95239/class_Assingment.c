#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char str[40];
    char ch;
    int i,c=0,j;
    printf("enetr your the string ");
    gets(str);
    printf("enter the latter do you want to find occurance");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    { 
        
    if(ch==str[i])
    {
     c++;
    }
    }
      printf("%c   %d",ch,c);
    
   
}
    // {  c=1;
    //      if(str[i]!=-1)
    //      {
    //    for(j=i+1;str[i];i++)
    //    {
    //     if(str[i]==str[j])
    //     {
    //         c++;
    //         str[j]=-1;
    //     }
        
    //    } 
         

//          }
    
         
//     }
   
// }
      