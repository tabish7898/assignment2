#include<iostream>
using namespace std;
class square {
int n;
static int count;
public:
    square (int x)
    {
        n=x;
    }
    void sqr()
    {
        count++;

        cout<<"square of "<<n<<" = "<<n*n<<endl;
    }
    void countn ()
    {
        cout<<"No of times function called = "<<count;
    }



};
int square::count =0;
int main()
{
    square a (6);
    a.sqr();
    a.countn();
    return 0;
}
