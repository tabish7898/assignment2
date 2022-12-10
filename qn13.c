#include<stdio.h>
int main()
{
    char n;
    for(int i=0;i<7;i++)
    {
        n='A';
        for(int j=0;j<13;j++)
            {
            if(j<=6-i||j>=6+i)
            printf("%c",n);

        else
            printf(" ");
            if(j>5)
                n--;
            else
                n++;
            }
            printf("\n");
    }
    return 0;
}
