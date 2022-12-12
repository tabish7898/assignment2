#include<stdio.h>
void oddn(int n){
    int j=-1;
for(int i=0;i<n;i++)
{
    j=j+2;
    printf("%d",j);
}
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    oddn(n);
    return 0;
}
