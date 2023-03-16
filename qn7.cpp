#include<iostream>
using namespace std;
class time
{
    public:
    int hours,minutes;


    time(int x,int y)
    {
        hours =x;
        minutes = y;
    }
    void display()
    {
        cout<<"hours = "<<hours<<" minutes = "<<minutes<<endl;
    }


};
class minute
{
    int minutes;
public:
    minute()
    {

    }
    minute(int x)
    {
        minutes = x;
    }
    void display()
    {
        cout<<"minutes = "<<minutes<<endl;
    }
    void operator =(time t)
    {
          minutes=(t.hours*60)+t.minutes;
    }
};
int main()
{
    time t1(2,30);
    t1.display();
    minute m1;
    m1.display();
    m1=t1;
    m1.display();
    return 0;
}

