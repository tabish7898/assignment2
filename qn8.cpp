#include<iostream>
using namespace std;
class Bank{
float principal;
float rate;
float year;
float si;
public:
    Bank(float p,float r,float y)
    {
        principal = p;
        rate = r;
        year = y;
    }
    void Si()
    {
        si = (principal*rate*year)/100;
        cout <<"simple interest = "<<si<<endl;
    }
};
int main()
{
    Bank b(1000,5,1.5);
    b.Si();
}
