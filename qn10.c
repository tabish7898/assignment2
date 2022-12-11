#include<stdio.h>
#include<math.h>
int main()
{
     int a,b,c,d;
     float r1,r2;
     printf("Enter value of a,b and c in the format of ax^2+bx+c=0\n");
     scanf("%d %d %d",&a,&b,&c);
     d=(b*b)-4*a*c;
     if(d<0)
     {
         printf("roots are imaginary\n");
     }
     if(d==0)
     {
         printf("Both roots are equal\n");
         r1=-b/(2.0*a);
         printf("%f",r1);

     }

        if(d>0)
        {
            printf("Both roots are real and distnict\n");
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            printf("%f %f",r1,r2);
        }



    return 0;
}
