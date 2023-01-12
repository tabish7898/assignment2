#include<iostream>
using namespace std;
class average {
public:
    float x,y,z;


    float avg()
    {
        return (x+y+z)/3;
    }

};

int main()
{
    average a;
    cout <<"Enter three numbers"<<endl;
    cin>>a.x>>a.y>>a.z;
    float r = a.avg();
    cout <<"average = "<<r<<endl;

    return 0;
}


