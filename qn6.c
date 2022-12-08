#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    if(x>y||x==y)
        printf("\n%d",x);
    else
        printf("\n%d",y);
}
