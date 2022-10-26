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