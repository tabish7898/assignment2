#include<stdio.h>
int main()
{
    int n1,n2,max;
    printf("Enter two numbers\n");
    scanf("%d %d",&n1,&n2);
    (n1>n2)?(max=n1):(max=n2);
    while(1)
    {
        if(max%n1==0&&max%n2==0)
        {
            printf("Lcm is %d",max);
            break;
        }
        else{
            printf("lcm is %d",(n1*n2));
            break;
        }
    }
    return 0;
}
