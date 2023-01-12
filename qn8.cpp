#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;
    y=x+y;
    x=y-x;
    y=y-x;
    cout<<x <<" "<< y;
    return 0;
}
