#include<stdio.h>
#include<conio.h>



int main()
{
    // //E();
    // printf("\n");
    // O();
    // printf("\n");
    // //F();
    // U();
   ///B();
  ///D();
   // H();
    ///I();
    // J();
     //L();
    P();
    // // T();

}
void P()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=5;j++)
        { 
        if(i==1||j==1||i==5)
        { 
         printf("*");
        }
        else
        printf(" ");
        }
        printf("\n");

    }
}
void J()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=10;j++)
        { 
        if(j==10||i==9)
        { 
         printf("*");
        }
        else
        printf(" ");
        }
        printf("\n");

    }
}
void L()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=10;j++)
        { 
        if(j==1||i==9)
        { 
         printf("*");
        }
        else
        printf(" ");
        }
        printf("\n");

    }
}
void I()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=10;j++)
        { 
        if(j==8)
        { 
         printf("*");
        }
        else
        printf(" ");
        }
        printf("\n");

    }
}
void H()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=10;j++)
        { 
        if(j==1||j==10||i==5)
        { 
         printf("*");
        }
        else
        printf(" ");
        }
        printf("\n");

    }
}
void D()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=10;j++)
        { 
        if(j==1||i==1||j==10||i==9)
        { 
         printf("*");
        }
        else
        printf(" ");
        }
        printf("\n");

    }
}
void B()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=10;j++)
        { 
        if(j==1||i==5||i==1||j==10||i==9)
        { 
         printf("*");
        }
        else
        printf(" ");
        }
        printf("\n");

    }
}
void E()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=5;j++)
        { 
        if(j==1||i==1||i==5||i==10)
        { 
         printf("*");
        }
        else
        printf(" ");
        }
        printf("\n");

    }
}
void O()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=5;j++)
        { 
        if(j==1||i==1||i==2||i==5||i==6||i==9||i==10)
        { 
         printf("**");
         //printf("*");
        }
        else
        printf(" ");
        }
        printf("\n");

    }
}
void F()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=7;j++)
        { 
        if(j==1||i==1||i==6)
        { 
         printf("*");
        }
        else
        printf(" ");
        }
        printf("\n");

    }
}
void U()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        { 
        if(j==1||i==7||j==7)
        { 
         printf("*");
        }
        else
        printf(" ");
        }
        printf("\n");

    }
}