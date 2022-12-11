#include<stdio.h>
#include<stdlib.h>
int main()
{
    char n;
    float a,b,c;
    while(1){
            fflush(stdin);
printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
printf("b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
printf("c. Check whether a given set of three numbers are equilateral triangle or not\nd. Exit\n");
scanf("%c",&n);
if(n=='d')
    break;

printf("Enter three numbers\n");
scanf("%f%f%f",&a,&b,&c);
switch(n)
{
case 'a':
    if(a==b||b==c||c==a)
    printf("yes\n");
    else
        printf("No\n");
        break;
case 'b':
    if((a*a)+(b*b)==(c*c)||(a*a)+(c*c)==(b*b)||(b*b)+(c*c)==(a*a))
        printf("yes\n");
    else
        printf("No\n");
        break;
case 'c':
    if(a==b&&b==c)
        printf("yes\n");
    else
        printf("No\n");
        break;
case 'd':
    break;
default :
    printf("invalid option\n");

}
    }


    return 0;
}
