#include<iostream>
using namespace std;
class Area{
int r,l,w,s;
public:
    Area(int x)
    {
        r=x;
        s=x;
    }
    Area(int x,int b)
    {
        l=x;
        w=b;
    }

    void circle()
    {
        cout <<"Area = "<<3.14*r*r<<endl;
    }
    void sqr()
    {
        cout<<"Area = "<<s*s<<endl;
    }
    void rectangle()
    {
        cout <<"Area = "<<l*w<<endl;
    }

};
int main()
{
    Area a (2);
    Area b (5,4);

    a.circle();
    b.rectangle();
    a.sqr();
    return 0;
}
