#include<iostream>
using namespace std;
class integer
{
    int x;
public:
    integer (int a)
    {
        x=a;
    }
    operator int ()
    {
        return x;
    }
};
int main()
{
    integer x =5;
     int y=x;
     cout<<y;
     return 0;
}
