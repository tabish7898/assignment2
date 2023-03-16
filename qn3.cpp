#include<iostream>
using namespace std;
class product
{
    int x,y;
public:
    void setdata(int a,int b)
    {
        x=a;
        y=b;
    }
   int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};
class item
{
    int i;
public:
    item(){}
    item(product p)
    {
        i = p.getx()+p.gety();
    }
    void display()
    {
        cout<<"item = "<<i<<endl;
    }
};
int main()
{
    product p1;
    p1.setdata(5,6);
    item i1=p1;
    i1.display();
    return 0;

}
