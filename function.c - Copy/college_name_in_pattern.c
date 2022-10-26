#include<stdio.h>
#include<windows.h>
#include<conio.h>
void S();
void A();
void G();
void R();
void I();
void N();
void T();
void U();
void O();
void F();
void E();
void C();
void Y();
void H();
void L();
void D();
void W();
void P();
int main()
{   system("cls");
   system("color 46");
   W();
      printf("\n");
      E();
      printf("\n");
      L();
      printf("\n");
      C();
      printf("\n");
      O();
      printf("\n");

      printf("\n");
      M();
      printf("\n");
      E();
      printf("\n");
      T();
      printf("\n");
      O();
      printf("\n");
    E();
     printf("\n");
      U();
      printf("\n");
      P();
      printf("\n");
      H();
      printf("\n");
      O();
      printf("\n");
      R();
      printf("\n");
      I();
      printf("\n");
      A();
      printf("\n\n\n");
    I();
      printf("\n");
    N();
      printf("\n\n\n");

    S();

    printf("\n\n");
    A();
    printf("\n");
    G();
    printf("\n\n");
      A();
        printf("\n\n");
    R();
      printf("\n\n");
    I();
      printf("\n\n");
    N();
    printf("\n\n");
    S();
    printf("\n\n");
    T();
    printf("\n\n");
    I();
    printf("\n\n");
    T();
    printf("\n\n");
    U();
    printf("\n\n");
    T();
    printf("\n\n");
    E();
    printf("\n\n");
    O();
    printf("\n\n");
    F();
    printf("\n\n");
    S();
    printf("\n\n");
    C();
    printf("\n\n");
    I();
    printf("\n\n");
    E();
    printf("\n\n");
    N();
    printf("\n\n");
    C();
    printf("\n\n");
    E();
  printf("\n\n");
    T();
      printf("\n");
    E();
      printf("\n");
    C();
      printf("\n");
    H();
      printf("\n");
    N();
      printf("\n");
    O();
      printf("\n");
    L();
      printf("\n");
    O();
      printf("\n");
    G();
      printf("\n");
    A();
      printf("\n");
N();
      printf("\n");
      D();
      printf("\n");

      E();
      printf("\n");
      N();
      printf("\n");
      G();
      printf("\n");
      I();
      printf("\n");
      N();
      printf("\n");
      E();
      printf("\n");
      E();
      printf("\n");
      R();
      printf("\n");
      I();
      printf("\n");
      N();
      printf("\n");
      G();
      printf("\n");

    
getch();

}
void S()
{
      int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j==10||j==9||i==8||i==7||i==4||i==5||i==1||i==2||j==1||j==2)
            {
            if(j==1&&i==6||j==1&&i==6||j==1&&i==6||j==10&&i<=4||j==9&&i==3||j==2&&i==6)
            {
            printf(" ");
            }
            else
            {Sleep(1);
            printf("#");
            }
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
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=14;j++)
        {
            if(j==7+i||j==6+i||j==8-i||j==9-i||i==5)
            {
            if(j<=2&&i==5||j>=13&&i==5)
            {
            printf(" ");
            }
            else
            { Sleep(2);
            printf("#");
            }
            }
            else
            printf(" ");

        }
        printf("\n");

    }
}


void G()
{

    

    int i,j;
    for(i=1;i<=11;i++)
    {
        for(j=1;j<=17;j++)
        {
            if(j==1||j==2||i==10||i==11||j==10||j==11||i==5||i==6||j==16||j==17)
            {
        
            if(j>=3&&j<=9&&i==5||j>=3&&j<=9&&i==6||i>=1&&i<=4&&j==10||i>=1&&i<=4&&j==11||i>=1&&i<=4&&j==16||i>=1&&i<=4&&j==17||j>=12&&j<=15&&i==10||j>=12&&j<=15&&i==11||i==1||i==2)
            
            {

            
            printf(" ");
            }
            else
            {
        Sleep(1);
       
            printf("#");
            }
        }
            else
            printf(" ");

        }
        printf("\n");

    }
}
void R()
{
     int i,j;
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=8;j++)
        {
            if(j<=1||i<=1||j==8||j==7||i==4||i==5||i==j+3||i==j+4)
            {
            if(i>=6&&i<=9&&j==8||i>=6&&i<=9&&j==7)
            {
            printf(" ");
            }
            else
            { Sleep(1);
            
            printf("#");
            }
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
        for(j=1;j<=6;j++)
        {
            if(j==3||j==4||i<=2||i>=8)
            {
           Sleep(2);
          
            printf("#");
            }
            else
            printf(" ");

        }
        printf("\n");

    }
}
void N()
{
     int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j==1||j==2||j==10||j==9||i==j||i==j+1)
            {
        
        Sleep(2);
            printf("#");
            }
            
            else
            printf(" ");

        }
        printf("\n");

    }
}
  
void T()
{
         int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==4||j==5||i==1||i==2)
            {
           Sleep(2);
            printf("#");
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
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=12;j++)
        {
            if(j==1||j==2||i==8||i==9||j==11||j==12)
            {
           Sleep(2);
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
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=12;j++)
        {
           if(j<=2||i<=2||i>=8||j==11||j==12)
            {Sleep(2);
            printf("#");
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
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(j<=2||i<=2||i==5||i==6)
            {
           Sleep(2);
            printf("#");
            }
            else
            printf(" ");

        }
        printf("\n");

    }
} 
void C()
{
   int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
          if(j<=2||i<=2||i>=8)
            {
           Sleep(2);
            printf("#");
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
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(j<=2||i==1||i==2||i==5||i==6||i==9||i==8)
            {
           Sleep(2);
            printf("#");
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
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(j==1||j==2||i==4||i==5||j==5||j==6)
            { Sleep(2);
            printf("#");
            }
            else
            printf(" ");

        }
        printf("\n");

    }
}

void Y()
{
    int i,j;
    for(i=-1;i<=10;i++)
    {
        for(j=-6;j<=6;j++)
        {
            if(j==i||j==i-1||j==6||j==5)
            { Sleep(2);
            printf("#");
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
           Sleep(2);
            printf("#");
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
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=12;j++)
        {
            if(j<=2||i<=2||i>=9||j>=11)
            {
                if(i==1&&j==12||i==2&&j==12||i==9&&j==12||i==10&&j==12)
                printf(" ");
                else{
           Sleep(10);
            printf("#");
            }
        }
            else
            printf(" ");

        }
        printf("\n");

    } 
}
void W()
{
     int i,j;
    for(i=-2;i<=9;i++)
    {
        for(j=0;j<=17;j++)
        {
            if(j==1||j==0||j==15||j==16||j==10-i||j==6+i||j==11-i||j==5+i)
            {
                if(j==4&&i==-2||j==12&&i==-2||j==5&&i==-1||j==11&&i==-1||j==6&&i==0||j==10&&i==0||j==7&&i==1||j==9&&i==1||j==3&&i==-2||j==13&&i==-2||j==4&&i==-1||j==12&&i==-1||j==5&&i==0||j==11&&i==0||j==6&&i==1||j==10&&i==1||j==7&&i==2||j==9&&i==2)
                
                    printf(" ");
                    else
            
            {
           Sleep(2);
            printf("#");
            }
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
                {// Sleep(2);
            printf("@");
            }}
            else
            printf(" ");

        }
        printf("\n");

    }
}
void M()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=16;j++)
        {
            if(j==4||j==3||j==13||j==14||j==3+i||j==14-i||j==2+i||j==13-i)
            {
                if(j==8&&i==6||j==9&&i==6||j==7&&i==7||j==10&&i==7||j==6&&i==8||j==11&&i==8||j==5&&i==9||j==12&&i==9   || j==7&&i==6||j==10&&i==6||j==6&&i==7||j==9&&i==7||j==9&&i==8||j==10&&i==8||j==11&&i==9||j==12&&i==9||i==8&&j==5||i==5&&j==9||i==5&&j==7)
                
                    printf(" ");
                    else
            
            {
           //Sleep(2);
            printf("#");
            }
            }
            else
            printf(" ");

        }
        printf("\n");

    }
}

 







