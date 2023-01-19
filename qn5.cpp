#include<iostream>
using namespace std;
class ReverseNumber{
int n,r;
public:
    ReverseNumber(int x)
    {
        n = x;
    }
    void reverse ()
    {
        int num =n;
        r=0;
        while(num)
        {
            r=r*10;
            r = r + num%10;

            num=num/10;
        }
    }

    void print()
    {
        cout <<r;
    }
};
int main(){
    ReverseNumber a (684138);
    a.reverse();
    a.print();

return 0;
}
