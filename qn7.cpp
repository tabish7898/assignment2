#include<iostream>
using namespace std;
class fraction
{
    long numerator,denominator;
public:
    fraction(long int n=0,long int d = 0)
    {
        numerator = n;
        denominator = d;

    }
    friend void operator>>(istream &in,fraction &f)
    {
        cout<<"\n Numerator   : ";
        in>>f.numerator;
        cout<<"\n denominator : ";
        in>>f.denominator;
    }
    friend void operator<<(ostream &out,fraction &f)
    {
        cout<<f.numerator<<"/"<<f.denominator;
    }
    fraction operator++()
    {
        ++numerator;
        ++denominator;
            return (*this);
    }
    fraction operator++(int s)
    {
        fraction temp= *this;
        numerator++;
        denominator++;
        return temp;
    }

};
int main()
{
    fraction f1,f2;
    cout<<"Enter fraction values  :"<<endl;
    cin>>f1;
    ++f1;
    cout<<f1;
    return 0;
}
