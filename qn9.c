#include<stdio.h>
int main()
{
    int n=1;
    for(int i=0;i<4;i++)
    {
        n=1;
        for(int j=0;j<8;j++){

           if(j>=i&&j<=6-i){

                    printf("%d",n);
                     if(j<3)
                n++;
                else
                n--;

                }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

