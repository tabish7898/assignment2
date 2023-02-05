#include<iostream>
using namespace std;
class number
{
    int x,y,z;
public:
    void accept()
    {
        cout<<"Enter three numbers"<<endl;
        cout<<"---------------------"<<endl;
        cout<<"First number   :"<<endl;
        cin>>x;
        cout<<"Second number  :"<<endl;
        cin>>y;
        cout<<"Third number   :"<<endl;
        cin>>z;
        cout<<"---------------------"<<endl;
    }
    void display()
    {
        cout<<" "<<x<<"\t"<<y<<"\t"<<z<<endl;
    }
    void operator-()
    {
        x=-x;
        y=-y;
        z=-z;
    }
};
int main()
{
    number num;
    num.accept();
    cout<<"numbers are "<<endl;
    num.display();
    -num;
    cout <<"negative numbers are : \n\n";
    num.display();
    return 0;
}
