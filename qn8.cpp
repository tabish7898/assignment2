#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
public:
    void set()
    {
        cout<<"Enter elements of the matrix \n";
        for(int i=0 ;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void operator-()
    {
        for(int i=0;i<3;i++)
        {
            for(int j =0;j<3;j++)
            {
                a[i][j]=-a[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0 ;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }

    }

};
int main()
{
    matrix m1;
    m1.set();
    -m1;
    m1.display();
    return 0;
}
