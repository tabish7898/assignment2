#include<stdio.h>

float si(float p,float r,float t){
    return (p*r*t)/100;

}
int main()
{
    float a,b,c;
    printf("Enter principal ,rate and time\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("simple interest = %f ",si(a,b,c));

    return 0;
}
