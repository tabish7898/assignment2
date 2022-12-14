#include<stdio.h>
void even(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    even(n);
    return 0;
}
void even(int n)
{
    if(n==0)
        return;
    even(n-1);
    printf("%d ",n*2);
}
