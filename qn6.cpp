#include<iostream>
using namespace std;
int main()
{
    string pincode ;
     cout <<"enter area pincode number \n";
     cin>>pincode;
     try
     {
         if(pincode.length()<6)
            throw pincode;
         else
            cout<<pincode <<" is valid pincode \n";

     }
     catch(string s)
     {
         cout <<s<<" is invalid pincode \n";
     }
     return 0;
}

