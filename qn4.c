#include<stdio.h>
int main()
{
    int n1,n2,hcf,count=0;
    printf("Enter two numbers\n");
    scanf("%d %d",&n1,&n2);
    (n1>n2)?(hcf=n2):(hcf=n1);
    for(int i=hcf;i>=2;i--)
    {
        if(n1%i==0&&n2%i==0)
        {
        hcf=i;
        count++;
        break;}
    }
    if(count==0)
        printf("Hcf = 1\n");
    else
        printf("Hcf = %d",hcf);
    return 0;
}
