#include<iostream>
using namespace std;
class factorial{
int n,fact=1;
public:
    factorial(int num)
    {
        n=num;
    }
    void facto()
    {
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
    }
    void print()
    {
        cout<<"Factorial of "<<n<<" = "<<fact<<endl;;
    }

};
int main()
{
    factorial a=factorial(5);
    a.facto();
    a.print();

    return 0;
}
