#include<iostream>
using namespace std;
void pass(char *password)
{
    int capital = -1;
     int symbol = -1;
     int digit = -1;
     int length = 0;
     for(int i = 0;password[i]!='\0';i++)
     {
         if(password[i]>=48 && password[i]<=57)
            digit=1;
         else if (password[i]>='!' && password[i]<='*')
            symbol = 1;
         else if (password[i]>='A' && password[i]<='Z')
            capital =1;

         length++;
     }
     try
     {
         if(digit==-1||symbol==-1||capital==-1||length<6)
            throw 1;

         else
            cout<<"password is set\n";
     }
     catch(int a)
     {

     cout<<"invalid password\n";
     cout<<capital<<" "<<symbol<<" "<<length<<" "<<digit;

     }
}
int main()
{
    char password[15];
    cout<<"Enter password\n";
    cin.get(password,15);
    pass(password);
    return 0;
}
