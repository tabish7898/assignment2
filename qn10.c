#include<stdio.h>
int main()
{
    float a,b,c;

    printf("Enter cost price and selling price\n");
    scanf("%f%f",&a,&b);
    if(a<b||a==b)
    {
        c=(b-a)/(a)*100;
        printf("profit percentage is %f\n",c);

    }
    else
    {
        c=(a-b)/(a)*100;
        printf("loss percentage is %f\n",c);
    }
    return 0;
}
