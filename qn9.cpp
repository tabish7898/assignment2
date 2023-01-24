#include<iostream>
using namespace std;
class Bill{
int customerid;
float unit;
float bill;
public:
    void get(int c,float u)
    {
        customerid= c;
        unit = u;
    }
    calculatebill()
    {
        if(unit>0 && unit<100)
            bill = unit*1.20;
        else if(unit>0 && unit<=200)
        {
            bill = ((unit-100)*2)+(100*1.20);
        }
        else if(unit>200)
        {
           bill =  (99*1.20)+(101*2)+((unit-200)*3);
        }
    }
    void show()
    {
        cout<<"Bill = "<<bill<<endl;
    }
};
int main()
{
    Bill bi;
    bi.get(123,101);
    bi.calculatebill();
    bi.show();
}
