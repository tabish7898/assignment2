#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
public:
    void setmatrix()
    {
        cout<<"\n Enter matrix elements \n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    matrix operator+(matrix t)
    {
        matrix temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.a[i][j]=a[i][j]+t.a[i][j];
            }
        }
        return temp;
    }
};
int main()
{
    matrix m1,m2,m3;
    m1.setmatrix();
    m2.setmatrix();
    m3=m1+m2;
    m3.display();
    return 0;
}
