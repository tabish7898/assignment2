#include<stdio.h>;
void oddn(int n)
{
    if(n>=1){
        oddn(n-1);
        printf("%d ",(2*n-1));}
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    oddn(n);
    return 0;
}
