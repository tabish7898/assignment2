#include<stdio.h>
int main()
{
    char month[]="";
    printf("Enter month name\n");
    scanf("%s",&month);
    printf("\n%s",month);
    if(month==jan)
        printf("31");
    return 0;
}
