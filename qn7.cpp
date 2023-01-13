#include<iostream>
using namespace std;
void add(int x,int y,int z=0)
{
    cout <<x+y+z;
}
int main()
{
    int r,x,y,z;
     cout <<"if you want to add two numbers press 1,if you want to add three numbers press 2" <<endl;
     cin>>r;
     if(r==1)
     {
         cout<<"Enter two numbers"<<endl;
         cin>>x>>y;
         add(x,y);
     }
     else
     {
         cout <<"Enter three numbers"<<endl;
         cin >>x>>y>>z;
         add(x,y,z);
     }
    return 0;
}
