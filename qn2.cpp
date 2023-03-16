#include<iostream>
using namespace std;
class complex
{
    int real,imaginary;
public:
    void display()
    {
        cout<<"real = "<<real<<" imaginary = "<<imaginary<<endl;
    }
    complex(int r,int i)
    {
        real = r;
        imaginary = i;
    }
    explicit operator int()
    {
        return real+imaginary;
    }
};
int main()
{
    complex c (5,6);
    int x=(int)c;
    cout<<x;
    return 0;
}
