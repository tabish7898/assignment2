#include<stdio.h>
int main()
{
    int n1,n2,t,count=0;
    printf("Enter two numbers\n");
    scanf("%d %d",&n1,&n2);
    (n1>n2)?(t=n2):(t=n1);
    for(int i=t;i>=2;i--)
    {
        if(n1%i==0&&n2%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("Co-prime");
    else
        printf("Not Co-prime");
    return 0;
}
