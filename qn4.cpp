#include<iostream>
using namespace std;
class Counter{
static int count;
public:
Counter (){
count++;}
void showCount()
{
    cout<<count;
}

};
int Counter::count;
int main()
{
    Counter c1,c2;
    c1.showCount();
}
