#include<stdio.h>
int HCF(int n1,int n2)
{
    if(n2==0)
        return n1;
    else
    return (n2,n1%n2);
}
int main()
{
    int n1,n2,t;
    printf("Enter two number\n");
    scanf("%d %d",&n1,&n2);
   if(n1>n2)
   {
       t=n2;
       n2=n1;
       n1=t;
   }




    printf("HCF = %d",HCF(n1,n2));
    return 0;
}
