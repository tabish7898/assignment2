#include<iostream>
using namespace std;
class complex
{
    int a,b;
public:
    void setdata(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{
    complex c1;
    c1.setdata(2,3);
    c1.display();
    return 0;
}
