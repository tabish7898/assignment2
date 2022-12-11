#include<stdio.h>
int main()
{
    float n,bill;
    printf("Enter the number of units\n");
    scanf("%f",&n);
    switch(n<=50)
    {
    case 1:
        bill=(n*0.50);
        break;
    case 0:
        switch(n<=150)
        {
            case 1:
            bill=50*0.50;
            n=n-50;
            bill=bill+(n*0.75);
            break;
            case 0:
                switch(n<=250)
                {
                    case 1:
                    bill=(50*0.50);
                    n=n-50;
                    bill=bill+(100*0.75);
                    n=n-100;
                    bill=bill+(n*1.20);
                    break;
                    case 0:
                         bill=50*0.50;
                    n=n-50;
                    bill=bill+(100*0.75);
                    n=n-100;
                    bill=bill+(100*1.20);
                    n=n-100;
                    bill=bill+(n*1.50);
                    break;
                }
                break;
        }
        break;
}

    bill=bill+(bill*0.20);
    printf("\nBill = %f\n",bill);
    return 0;
}
