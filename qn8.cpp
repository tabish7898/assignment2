#include<iostream>
using namespace std;
class coordinates
{
    int x,y,z;
public:
    void setcoords(int x,int y ,int z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
   coordinates operator,(coordinates t)
    {
        coordinates tmp;
        tmp.x=t.x;
        tmp.y=t.y;
        tmp.z=t.z;
        return tmp;
    }
    void display()
    {
        cout<<x<<" "<<y<<" "<<z;
    }
};
int main()
{
    coordinates c1,c2,c3;
    c1.setcoords(1,2,3);
    c2.setcoords(2,3,4);
    c3=(c1,c2);
    c3.display();
    return 0;
}
