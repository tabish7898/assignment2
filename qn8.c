#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count=0;
    printf("Enter a number to find its next prime number\n");
    scanf("%d",&n);
    n++;
    for(int i=n;i>0;i++)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
        {
             printf("%d",i);
             break;}

    }



    return 0;
}
