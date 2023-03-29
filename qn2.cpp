#include<iostream>
using namespace std;
void trying(int num)
{
    try
    {
        if(num>=0 && num<=10)
        {
            throw num;
        }
            else
                cout<< "Number don't fall into the decided boundary \n ";

    }
    catch(int n)
    {
        cout<<"entered number is "<<n<<endl;
    }
}
int main()
{
    int num;
    cout<<"enter a number \n";
    cin>>num;
    trying(num);
    return 0;
}
