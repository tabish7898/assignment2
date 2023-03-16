#include<iostream>
using namespace std;
class complex
{
    int real,imaginary;
public:
    complex(int x)
    {
        real = x;
        imaginary = x;
    }
    void display()
    {
        cout<<"real = "<<real<<endl<<"imaginary = "<<imaginary<<endl;
    }
};
int main()
{
    complex c1 = 5;
    c1.display();
    return 0;
}
