#include<stdio.h>
int main()
{
    int n;
    printf("1.sunday\n2.monday\n3.tuesday\n4.wednesday\n5.thursday\n6.friday\n7.saturday\n");
    printf("choose a day\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("good luck and positivity.\n");
        break;
    case 2:
        printf("Wishing you lots of happiness\n");
        break;
    case 3:
        printf(" Have a good day\n");
        break;
    case 4:
        printf("No matter what life gives you, face it with courage.\n");
        break;
    case 5:
        printf("I wish you a colorful and beautiful life.\n");
        break;
    case 6:
        printf("May you get all the things you have ever wishes for.\n");
        break;
    case 7:
        printf("Blessings of grace and peace be with you today and every day.\n");
    }
    return 0;
}
