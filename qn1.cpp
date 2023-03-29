#include<iostream>
using namespace std;
void test_try(int num)
{
  const  char * c = "string handling";
    try
    {
        if(num>=0 && num<=9)
        {
            throw num;

        }
        else
            cout<<"it is not a single digit number \n";
        throw
        c;
    }
    catch(int a)
    {
        cout<<"it is a single digit number "<<a;
    }
    catch(char b[100])
    {
        cout<<b;
    }
}
int main()
{
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    test_try(num);

    return 0;
}
