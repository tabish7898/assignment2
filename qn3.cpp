#include<iostream>
using namespace std;
class cube{
double side;
public:
    cube(double s)
    {
        side =s;
    }
    double volume ()
    {
        return (side*side*side);
    }
};
int main()
{
    cube c1(5);
    cout<<"volume of cube = "<<c1.volume()<<endl;


    return 0;
}

