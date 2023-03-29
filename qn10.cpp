#include<iostream>
using namespace std;
void checknickname(char *nickname)
{
    int digit=-1;
    int symbol=-1;
    int length = 0;
    int space = -1;
    for(int i=0;nickname[i]!='\0';i++)
    {
        if(nickname[i]>='1'&&nickname[i]<='9')
        digit = 1;
        else if(nickname[i]>='!'&&nickname[i]<='*')
            symbol =1;
            else if(isspace(nickname[i]))
                space=1;

        length++;
    }
    try
    {
        if(digit==1||symbol==1||length>8||space==1)
            throw 1;
        else
            cout<<nickname<<" is valid nickname\n";
    }
    catch(int a)
    {
        cout<<"invalid nickname\n";
    }
}
int main()
{
    char nickname[10];
    cout<<"Enter your nickname\n";
    cin.get(nickname,10);
    checknickname(nickname);
    return 0;
}
