#include<iostream>
using namespace std;
class area {
public:
    float x;


    float are()
    {
        return 3.14*x*x;
    }

};

int main()
{
    area a;
    cout <<"Enter radius of circle"<<endl;
    cin>>a.x;
    float r = a.are();
    cout <<"area = "<<r<<endl;

    return 0;
}
