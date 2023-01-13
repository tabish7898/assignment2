#include<iostream>
using namespace std;
class fibornot
{
    public:
    int x,fib=0,fib1=0,fib2=1;
    void check()
    {
        while(fib<=x){
            fib=fib1+fib2;
            fib1=fib2;
            fib2=fib;
            if(fib==x){
                cout<<"it is fibonacci number";
                break;
                }


        }
        if(fib>x)
            cout <<"number is not fibonacci";
    }
} ;
int main()
{
    fibornot a;
    cout<<"Enter a number"<<endl;
        cin>>a.x;
        a.check();

    return 0;
}
