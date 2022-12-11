#include<stdio.h>
int main()
{
   /* if(var == 1)
printf("good");
else if(var == 2)
printf("better");
else if(var == 3)
printf("best");
else
printf("invalid");*/
int var;
printf("Enter a number\n");
scanf("%d",&var);
switch(var)
{
case 1:
    printf("good");
    break;
case 2:
    printf("better");
    break;
case 3:
    printf("best");
    break;
default :
    printf("invalid");
}

    return 0;
}
