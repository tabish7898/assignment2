#include<stdio.h>
int main()
{
    int n;
    for(int i=0;i<4;i++)
    {
        n=1;
        for(int j=0;j<7;j++)
        {
            if(j<=3-i||j>=3+i){
                printf("%d",n);


                }
            else
                printf(" ");
                 if(j<3)
                n++;
                else
                    n--;
        }
        printf("\n");
    }
    return 0;
}
