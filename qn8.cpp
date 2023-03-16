#include<iostream>
using namespace std;
class rupee
{
    int x;
public:
    rupee(int a)
    {
        x=a;
    }
    operator int()
    {
        return x;
    }
};
int main()
{
    rupee r=5;
    int x=r;
    cout<<x;
    return 0;
}
