#include<iostream>
using namespace std;
void arithmetic(int a , int b,int c, char operators)
{
    try
    {

        if(operators != '-' && operators != '+' && operators != '*' && operators != '/')
            throw operators;
        else
        {
            switch(operators)
            {
        case '+':
            c = a+b;
            break;
        case '-' :
            c=a-b;
            break;
        case '*':
            c=a*b;
            break;
        case '/':
            if(b==0)
            {
                throw b;
            }
            else
                c=a/b;
            break;
            }
        }
        cout<<a<<operators<<b<<" = "<<c<<endl;
    }
    catch(char c)
    {
        cout<<"operator is invalid \n";
    }
    catch(int b)
    {
        cout<<"we cannot divide the number by "<<b;
    }
}
int main()
{
    int a,b,c;
    char operators;
    cout<<"for arithmetic operation enter numerator\n";
    cin>>a;
    cout<<"enter operator \n";
    cin>>operators;
    cout<<"enter denominator \n";
    cin>>b;
    arithmetic(a,b,c,operators);
    return 0;
}
