#include<iostream>
using namespace std;
class volume {
public:
    float x,y,z;


    float vol()
    {
        return x*y*z;
    }

};

int main()
{
    volume a;
    cout <<"Enter length ,width ,height of cuboid"<<endl;
    cin>>a.x>>a.y>>a.z;
    float r = a.vol();
    cout <<"volume= "<<r<<endl;

    return 0;
}

