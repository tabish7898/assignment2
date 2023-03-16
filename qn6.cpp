#include<iostream>
using namespace std;
class time
{
    int hours,minutes;
public:
    time()
    {
    }
    time (int duration)
    {
        hours = duration/3600;
        minutes=(duration%3600)/60;
    }
    void display()
    {
        cout<<"hours = "<<hours<<" minutes = "<<minutes<<endl;
    }
};
int main()
{
    int duration = 4000;
    time t1(duration);
    t1.display();
    return 0;
}
