#include<stdio.h>
float area(int r){

return 3.14*r*r;
}
int main()
{
    float n;
    printf("Enter radius of circle\n");
    scanf("%f",&n);
printf("area = %f",area(n));

    return 0;
}


