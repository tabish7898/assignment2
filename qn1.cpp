#include<iostream>
using namespace std;
class complex{

int a,b;
public:
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"number = "<<a<<" + i"<<b<<endl;
    }
};
int main()
{
    complex a (3,4);
    a.display();

    return 0;
}
