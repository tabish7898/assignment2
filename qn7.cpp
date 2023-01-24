#include<iostream>
using namespace std;
class box{
int h,w,l;
public:
box(int x,int y,int z)
{
    h=x;
    w=y;
    l=z;
}
int volume()
{
    return h*l*w;
}
};
int main()
{
    box b1(3,4,5);
    int z = b1.volume();
    cout<<"volume = "<<z<<endl;
}
