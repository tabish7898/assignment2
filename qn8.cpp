#include<iostream>
using namespace std;
void area (float r)
{
    cout <<"Area of circle is "<<3.14*r*r<<endl;
}

void area (float l,float b)
{
    cout <<"Area of rectangle = "<<l*b<<endl;

}
void area (int base,int height)
{
    cout <<"Area of triangle = "<<0.5*base*height<<endl;
}
int main()
{
    float r,l,b;
    int base,height;
    cout <<"Enter radius"<<endl;
    cin>>r;
    area(r);
    cout<<"Enter length and breadth"<<endl;
    cin>>l>>b;
    area(l,b);
    cout<<"Enter base and height of triangle "<<endl;
    cin>>base>>height;
    area(base,height);
    return 0;
}
