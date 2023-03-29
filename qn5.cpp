#include<iostream>
using namespace std;
int main()
{
    string mobilenum ;
     cout <<"enter a mobile number \n";
     cin>>mobilenum;
     try
     {
         if(mobilenum.length()<10)
            throw mobilenum;
         else
            cout <<"valid mobile number \n";

     }
     catch(string s)
     {
         cout <<s<<" is invalid mobile number \n";
     }
     return 0;
}
