#include <iostream>
using namespace std;

class time {
int h,m,s;
public:
time(int a,int b,int c)
{
    h=a;
    m=b;
    s=c;
}
   void display()
   {
       cout<<h<<"hr "<<m<<"min "<<s<<"sec";
   }

};

int main()
{


 time a =time(10,5,7);
 a.display();


 return 0;
}


