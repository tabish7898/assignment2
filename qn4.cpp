#include<iostream>
using namespace std;
class item
{
    int i;
public:
    void display()
    {
        cout<<"item = "<<i<<endl;
    }
    item(){}
    item(int x)
    {
        i=x;
    }
};
class product
{
    int x,y;
public:
    product(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"x = "<<x<<"y = "<<y<<endl;
    }
    operator item()
    {
        return x+y;
    }

};
int main()
{
    product p1(6,7);
    p1.display();
    item i1=p1;
    i1.display();
    return 0;
}
