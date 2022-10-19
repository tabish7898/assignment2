#include<stdio.h>
 int main ()
 {
     int x,a,b,c;
     printf("enter a three digit number\n");
     scanf("%d",&x);
     a=x%10;
     x=x/10;
     b=x%10;
     x=x/10;
     printf("%d",a+b+x);

     return 0;

 }
