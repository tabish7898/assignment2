#include<stdio.h>
 int main()
 {
     int n;
     printf("Enter a positive or negative number\n");
     scanf("%d",&n);
     switch(n>0)
     {
         case 0:
         printf("%d",(n*-1));
         break;

         case 1:
            printf("%d",(n*-1));
            break;
     }
     return 0;
 }
