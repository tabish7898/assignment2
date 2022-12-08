#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b>c||a==b==c)
        printf("%d",a);
    else if(b>c||b==c)
        printf("%d",b);
    else
        printf("%d",c);
    return 0;
}
