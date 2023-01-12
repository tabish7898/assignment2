#include<iostream>
using namespace std;
class square{
    public:
int x;
int sqr()
{
    return x*x;
}
};
int main()
{
    square a;
    cout <<"enter a number"<<endl;
    cin>>a.x;
    int r=a.sqr();
    cout<<"square of "<<a.x<<" is "<<r<<endl;

    return 0;
}

