#include<iostream>
using namespace std;
class rectangle
{
    int l,w;
public:
    rectangle(int a,int b)
    {
        l=a;
        w=b;
    }
    void area()
    {
        cout<<"area of rectangle = "<<l*w<<endl;
    }

};
int main()
{
    rectangle a (5,6);
    a.area();
    return 0;
}
