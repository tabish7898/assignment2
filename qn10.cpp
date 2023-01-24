#include<iostream>
using namespace std;
class StaticCount{
static int count;
public:
    void fun()
    {
        count++;
    }
    void show()
    {
        cout<<count;
    }
};
int StaticCount::count;
int main()
{
    StaticCount a,b,c;
    a.fun();
    b.fun();
    c.fun();
    a.show();

}
