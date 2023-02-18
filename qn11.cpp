#include<iostream>
using namespace std;
class marks
{
    int mark;
public:
    marks(int a)
    {
        mark=a;
    }
    void print()
    {
        cout<<mark<<endl;
    }
    marks * operator->()
    {
        return this;
    }
};
int main()
{
    marks m(58);
    m.print();
    m->print();
    return 0;
}
