#include<iostream>
using namespace std;
class array
{
    int a[100];
    const int size = 100;
public:
    array()
    {

    }
    void setarray(int n, int index)
    {
        if(index>=size)
        {
            cout<<"\n illegal memory \n";
            exit(0);
        }

        a[index]=n;
    }
    void display(int index)
    {
        cout<<a[index];
    }
    int operator[](int index)
    {
        if(index>=size)
        {
            cout<<"\n illegal memory access \n";
            exit(0);
        }
        return a[index];
    }

};
int main()
{
    array a;
    a.setarray(5,90);
    cout<<a[111];
}
