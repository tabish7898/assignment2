#include<stdio.h>
int main()
{
    float inr;
    printf("Enter amount in INR\n");
    scanf("%f",&inr);
    printf("%0.2f INR = %f USD",inr, (inr/76.23));
    return 0;
}
