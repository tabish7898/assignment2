#include<stdio.h>
int main()
{
    char a;
    printf("Enter an alphabet\n");
    scanf("%c",&a);
    if(a>=65&&a<=90)
        printf("letter is upper case\n");
    else
        printf("letter is lowercase\n");
    return 0;
}
