#include<iostream>
using namespace std;
class complex{
int n1,n2;
public:
    void setn()
    {
    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;
    }
    friend complex operator+(complex c1,complex c2);

    void display()
    {
        cout<<n1<<" + "<<n2<<"i"<<endl;
    }
};
complex operator+(complex c1 ,complex c2)
{
    complex c;
    c.n1 = c1.n1+c2.n1;
    c.n2 = c1.n2+c2.n2;
    return c;
}
int main()
{
    complex a1,a2,a3;
    a1.setn();
    a2.setn();
    a3=a1+a2;
    a3.display();
    return 0;

}
