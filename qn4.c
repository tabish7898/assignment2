#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
            printf("%d\n",(i*2)+1);
        }
        return 0;
    }
