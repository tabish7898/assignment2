#include<iostream>
using namespace std;
class circle{
int r;
public:
    circle(int x)
    {
        r=x;
    }
    void area()
    {
        cout <<"Area = "<<3.14*r*r<<endl;
    }

};
int main()
{
    circle a (1);
    a.area();
    return 0;
}
