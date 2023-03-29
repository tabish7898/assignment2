#include<iostream>
using namespace std;
void uname(char *username)
{
    int length = 0;
    int digit = -1;
    int symbol = -1;
    for (int i=0;username[i]!='\0';i++)
    {
        if(username[i]>=48 &&username[i]<=57)
            digit = 1;
        else if(username[i]>='!' && username[i]<='*')
            symbol= 1;
        length++;
    }
    try
    {
        if(digit==-1||symbol==-1||length<6)
         throw 1;
        else
            cout<<username<<" is valid username\n";
            //cout<<digit;
            //cout<<symbol;
            //cout<<length;
    }
    catch(int a)
    {
        cout<<username<<" is invalid username\n";
    }

}
int main()
{
    char username[100];
    cout<<"enter username\n";
    cin.get(username,100);
    uname(username);

    return 0;
}
