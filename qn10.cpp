#include<iostream>
using namespace std;
int main()
{
    int a[10],sum=0;
    cout <<"Enter ten values for array"<<endl;
    for(int i=0;i<10;i++)
    {
        cin >>a[i];
    }
    for(int i=0;i<10;i++)
    {
        sum = sum +a[i];
    }
    cout <<sum;
    return 0;
}
