#include<stdio.h>
int main()
{
    int n;
    float r,a,b;
    while(1){

    printf("1.Addition\n2.subtraction\n3.Multiplication\n4.division\n5.exit\n");
    scanf("%d",&n);
    if(n==5)
            break;
    printf("Enter two numbers\n");
    scanf("%f%f",&a,&b);
    switch(n)
    {
    case 1:
       r= a+b;
       printf("%f",r);
       break;

    case 2:
        r=a-b;
        printf("%f",r);
        break;

    case 3:
        r=a*b;
        printf("%f",r);
        break;

    case 4:
        r=a/b;
        printf("%f",r);
        }
        printf("\n");
    }
    return 0;
}
