#include<iostream>
#include<cstring>
using namespace std;
class mystring
{
    char str[100];
public:
    void setstring()
    {
        cout<<"Enter the string \n";
        cin>>str;
    }
    void display()
    {
        cout<<str;
    }
    void operator!();
};
void mystring::operator!()
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97&&str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    cout<<"\n\nReversed string is :  "<<str;
}
int main()
{
    mystring s;
    s.setstring();
    s.display();
    !s;
    return 0;
}
