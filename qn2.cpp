#include<iostream>
using namespace std;
class Time{
int H,M,S;
public:
    void setTime(int a,int b,int c)
    {
        H=a;
        M=b;
        S=c;
    }
    void showTime()
    {
        cout<<H<<":"<<M<<":"<<S<<endl;
    }
    Time add(Time t)
    {
        Time temp;
        temp.H= H + t.H;
        temp.M= M + t.M;
        temp.S= S + t.S;
        temp.normalize();
        return temp;
    }
    void normalize()
    {
        M = M + S/60;
        S = S%60;
        H = H + M/60;
        M= M%60;
    }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(2,30,30);
    t2.setTime(5,50,70);
   t3 = t1.add(t2);
   t1.showTime();
   t2.showTime();
   t3.showTime();
   return 0;
}
