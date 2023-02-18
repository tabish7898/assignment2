#include<iostream>
using namespace std;
class complex
{
    int a,b;
public:
    complex(int a, int b):a(a),b(b)
    {

    }
    void display(){
    cout<<a<<" + "<<b<<"i"<<endl;
    }
    void operator=(complex &a)
    {

    }

};
int main()
{
    complex c(3,4);
    c.display();
    return 0;

}
