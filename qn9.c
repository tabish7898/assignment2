#include<stdio.h>
void octal (int n)
{
    if(n==0)
        return;
         octal(n/8);
        printf("%d",n%8);


}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    octal(n);
    return 0;
}
