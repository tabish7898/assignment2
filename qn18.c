#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<9;j++)
        {

            if(j>=4-i&&j<=4+i)
                printf("*");
            else
                printf(" ");


        }
        printf("\n");
    }
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<9;j++)
            {
              if(j>i&&j<8-i)
                    printf("*");
              else
                printf(" ");
            }
            printf("\n");
        }

    return 0;
}
