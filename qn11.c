#include<stdio.h>
int main ()
{
    char n='A';
    for(int i=0;i<5;i++)
    {  n='A';
        for(int j=0;j<=4+i;j++)
        {

            if(j>=4-i&&j<=4+i)
            {
                printf("%c",n);

                    if(j>3)
                        n--;
                    else
                        n++;


            }
            else
            {
                printf(" ");

            }


        }
        printf("\n");
    }
    return 0;
}
