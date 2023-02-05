#include<iostream>
using namespace std;
class num {
int n;
public:
void setnum(int x)
{
    n = x;
}
void display()
{
    cout<<"Value of n = "<<n<<endl;
}
 void operator++(void)
 {
     n=++n;
 }
 void operator++(int)
 {
     n=n++;
 }
 void operator--(void)
 {
     n=--n;
 }
};
int main()
{
    num n1;
    n1.setnum(5);
    n1++;
    n1.display();
    return 0;
}
