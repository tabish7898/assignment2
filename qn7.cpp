#include<iostream>
using namespace std;
class integer
{
    int x;
public:
    integer(int x):x(x)
    {

    }
    void display()
    {
        cout<<x<<endl;
    }
    void operator!()
    {
        x=-x;
    }
};
int main()
{


    integer i(6);
    i.display();
    !i;
    i.display();
}
