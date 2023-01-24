#include<iostream>
using namespace std;
class Date {
int DD,MM,YY;
public:
    Date(int d,int m,int y)
    {
        DD=d;
        YY=y;
        MM=m;
    }
    void showdate()
    {
        cout<<DD<<"-"<<MM<<"-"<<YY<<endl;
    }
};
int main()
{
    Date d1(22,01,2023);
    d1.showdate();
    return 0;
}
