#include<iostream>
#include<cstring>
using namespace std;
class Cstring
{
    char s[20];
public:

    void getstr()
    {
        cout<<"Enter string"<<endl;
        cin>>s;
    }
    void display()
    {
        cout<<s<<endl;
    }
    Cstring operator+(Cstring a)
    {
        Cstring x;
        strcpy(x.s,s);
        strcat(x.s,a.s);
        return x;
    }
    int operator==(Cstring &t);
};
int Cstring::operator==(Cstring &t)
{
    int check =1;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!=t.s[i])
        {
            check =0;
            break;
        }

    }
    return check;
}
int main()
{

int r =0;
    Cstring c1,c2,c3;
    c1.getstr();
    c2.getstr();
    c3=c1+c2;
    c3.display();
    r= (c1==c2);
    if(r==1)
    {
        cout<<"Equal strings"<<endl;
    }
    else
        cout<<"strings are not equal"<<endl;
return 0;
}
