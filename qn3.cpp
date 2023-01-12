#include<iostream>
using namespace std;
class addition {
public:
    int x;
    int y;

    int add()
    {
        return x+y;
    }

};

int main()
{
    addition a;
    cout <<"Enter two numbers"<<endl;
    cin>>a.x>>a.y;
    int r=a.add();
    cout <<r;

    return 0;
}
