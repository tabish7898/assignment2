#include<iostream>
using namespace std;
class complex {
int a,b;
public:
    complex()
    {

    }
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a + ib = "<<a<<" + "<<b<<"i"<<endl;
    }
   complex operator+(complex t)
    {
        complex temp;
        temp.a = a+t.a;
        temp.b = b+t.b;
        return temp;

    }
    complex operator-(complex t)
    {
        complex temp;
        temp.a = a-t.a;
        temp.b = b-t.b;
        return temp;

    }
    complex operator*(complex t)
    {
        complex temp;
        temp.a = a*t.a;
        temp.b = b*t.b;
        return temp;

    }
  bool operator==(complex t)
    {
        if(a == t.a && b == t.b)
        {
            return true;
        }
        else
            return false;

    }
};
int main()
{
    complex c1 (2,3),c2(3,4),c3;
    c3 = c1 +c2;
    c3.display();
    c3 = c1-c2;
    c3.display();
    c3=c1*c2;
    c3.display();
    cout<<(c1==c2)<<endl;
    return 0;
}
