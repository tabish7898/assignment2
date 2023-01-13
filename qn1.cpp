#include<iostream>
using namespace std;
class primenumbers
{
public:
    int n;
    void check()
    {
        int flag =0;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout <<"The number is prime";
        else
            cout <<"The number is not prime";
    }
};

int main()
{
    primenumbers a;
    cout <<"Enter a number"<<endl;
    cin>>a.n;
    a.check();

    return 0;
}
