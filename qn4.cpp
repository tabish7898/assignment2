#include<iostream>
using namespace std;
class Largestnumber{
int a,b,c,largest;
public:
   void set(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void check()
    {
       largest = a>b?(a>c?a:c):(b>c?b:c);
    }
    void print()
    {
        cout <<"largest number between these three is = "<<largest<<endl;
    }
};
int main()
{
    Largestnumber a;
    a.set(9,4,7);
    a.check();
    a.print();
    return 0;
}
