#include<iostream>
using namespace std;
 class dollar
 {
     int x;
 public:
     dollar(){cout<< "null"<<endl;}
    dollar(int a)
    {
        x=a;
    }
  void operator =(int y)
    {
         x=y;



    }
    void display()
    {
        cout <<x;
    }
 };
 int main()
 {
     dollar d;
     int x=5;
     d=x;
     d.display();
 }
