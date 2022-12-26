#include<stdio.h>
int sumodd(int n)
{

    if(n==1)
        return 1;
    return ((n*2)-1)+sumodd((n-1));


}
int main()

{
    int n,ans;
    printf("Enter a number\n");
    scanf("%d",&n);
    ans=sumodd(n);
    printf("%d",ans);
    return 0;
}

