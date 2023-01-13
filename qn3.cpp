#include<iostream>
using namespace std;
void power(int a,int b)
{
    int r=1;
    for(int i=0;i<b;i++)
    {
        r=r*a;
    }
    cout <<"x to power y = "<<r;
}

int main()
{
    int x,y;
    cout <<"Enter a number"<<endl;
    cin>>x;

    cout <<"Enter the power"<<endl;
        cin >>y;
        power(x,y);


    return 0;
}
