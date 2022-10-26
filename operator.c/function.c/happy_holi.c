#include<stdio.h>
#include<windows.h>
void H();
void A();
void O();
void P();
void Y();
void L();
void I();

 int main() 

{
    
        
        system("cls");
     system("color 7c");
     
    H();
      printf("\t\t\t\t\n");
   Sleep(1000);
      A();
      printf("\n");
      Sleep(1000);
      P();
      printf("\n");
    P();
     printf("\n");
    Sleep(1000);
    Y();
     printf("\n");
      H();
       printf("\n");
       O();
     printf("\n");
    L();
     printf("\n");
     I();
}
void H()
{
    int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(j==1||j==2||i==4||i==5||j==5||j==6)
            { //Sleep(10);
            printf("#");
            }
            else
            printf(" ");

        }
        printf("\n");

    }
}
   void A()
{
    int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(j==1||j==2||i==1||i==2||i==4||i==5||j==5||j==6)
            { //Sleep(10);
            printf("#");
            }
            else
            printf(" ");

        }
        printf("\n");

    }
}
   void P()
{
    int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(j==1||j==2||i==1||i==2||i==4||i==5||j==5||j==6)
            {
                if(i==6&&j==5||i==7&&j==5||i==8&&j==5||i==6&&j==6||i==7&&j==6||i==8&&j==6)
                printf(" ");
                else
                { Sleep(10);
            printf("@");
            }}
            else
            printf(" ");

        }
        printf("\n");

    }
}
void Y()
{
    int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(j==i||j==i-1||j==6||j==5)
            { Sleep(100);
            printf("#");
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
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(j==1||j==2||i==1||i==2||i==7||i==8||j==5||j==6)
            {Sleep(10);
            printf("$");
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
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(j==1||j==2||i==7||i==8)
            {
            Sleep(10);
            printf("#");
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
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(j==1||j==2)
            {Sleep(10);
            printf("#");
            }
            else
            printf(" ");

        }
        printf("\n");

    }
    system("color 60");
}





