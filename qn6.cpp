#include<iostream>
using namespace std;
void swap (int &a,int &b)
{
    int temp;
    temp =a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    cout <<"Enter two values"<<endl;
    cin >>x>>y;
    swap(x,y);
    cout <<"values after swapping = "<<x<<" "<<y;

    return 0;
}
