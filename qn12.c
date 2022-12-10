#include<stdio.h>
int main()
{
    char n;
    for(int i=0;i<4;i++)
    {
        n='A';
        for(int j=0;j<7;j++)
        {
            if(j>=i&&j<=6-i)
            {
                printf("%c",n);
                if(j>2)
                    n--;
                else
                    n++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
