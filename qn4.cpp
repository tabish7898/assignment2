#include<iostream>
using namespace std;

void mailid(char * mail)
{
   int attherate = -1;
    int dot = -1;
    int length = 0;
    for(int i = 0;mail[i]!='\0';i++)
    {
        if(mail[i]=='@')
            attherate = 1;
        else if(mail[i]=='.')
            dot = 1;
        length++;
    }
    try
    {
        if(attherate== -1 || dot ==-1)
            throw mail;
        else
            cout<<mail<<" is a valid mail id\n";

    }
    catch(char * c)
    {
        cout<<c<<" is invalid mail id\n";
    }
}
int main()
{
    char mail[100];
    cout<<"enter mail id\n";
    cin.get(mail,100);
    mailid(mail);
    return 0;
}
