#include<iostream>
using namespace std;
class maxdigit
{
    public:
    int x ,max=0,r;
    void check()
    {
        while(x!=0)
        {
            r=x%10;

            if(max<r)
            {
                max=r;
            }
            x=x/10;
        }
        cout <<"maximum digit is = "<<max;
    }
};
int main()
{
    maxdigit a;
    cout <<"Enter a number"<<endl;
    cin>>a.x;
    a.check();
    return 0;
}
