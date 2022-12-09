#include<stdio.h>
int main()

{
    int a,b;
    printf("Enter two numbers to find the prime numbers between them\n");
    scanf("%d %d",&a,&b);

    for(int i=a;i<=b;i++)

    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
            printf("%d ",i);
    }

    return 0;
}

