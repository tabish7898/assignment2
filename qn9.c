#include<stdio.h>
int check(int n,int d)
{
    int a,count=0;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        if(d==a){
                count++;
            break;}

    }
    if(count>0)
        return 1;
    else
        return 0;

}
int main()
{
    int n,d,r;
    printf("Enter a number and a digit\n");
    scanf("%d %d",&n,&d);
    r=check(n,d);
    if(r==1)
        printf("%d contains %d\n",n,d);
    else
        printf("no match\n");

    return 0;
}
