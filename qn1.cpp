#include<iostream>
using namespace std;
class complex{
int a,b;

public:
    void setdata (int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout <<a<<" + "<<b<<"i"<<endl;
    }
    complex add(complex t)
    {

    complex temp;
    temp.a= a+ t.a;
    temp.b= b+ t.b;
    return temp;

    }
};
int main()
{
    complex t1,t2;
    t1.setdata (3,4);
    t2.setdata (4,5);
   complex c3 = t1.add(t2);
    c3.showdata();
    return 0;
}
