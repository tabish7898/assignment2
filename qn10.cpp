#include<iostream>
using namespace std;
class Distance
{
    int feet,inches;
public:
    Distance()
    {

    }
    Distance(int f,int i)
    {
        feet=f;
        inches=i;
    }
    Distance operator()(int a,int b,int c)
    {
        Distance d;
        d.feet = a+c+5;
        d.inches =a+b+15;
        return d;
    }
    void display()
    {
        cout<<feet<<" "<<inches<<endl;
    }
};
int main()
{
   Distance d1(2,3);
    Distance d2;
    d1.display();
    d2=d1(3,4,5);
    d2.display();
    return 0;

}
