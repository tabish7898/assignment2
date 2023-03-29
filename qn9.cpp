#include<iostream>

using namespace std;
void mail(char *gmail)
{
    char s []={"@gmail.com"};
   // cout<<s;
    int r=-1;
 int k,l=10,j;
 int length = 0;


    for(int i=0;gmail[i]!='\0';i++)
    {
         k = i;
        for(j=0;j<=l-1;j++)
        {
            if(gmail[k]!=s[j])
                break;
                k++;
        }
        if(j==l)
            r= 1;

            length++;
    }

   // cout<<"\n"<<r;
    try
    {
        if(r==-1)
            throw 1;
            else if(length<=10)
                throw 2;
        else
            cout<<gmail<<"  "<<"is valid gmail id\n";
    }
    catch(int a)
    {   if(a==1)
        cout<<gmail<<"  "<<"does not contains = \"@gmail.com\" ";
        else
            cout<<"invalid gmail id";
    }

}

int main()
{
    char gmail[50];
    cout<<"Enter gmail id"<<endl;
    cin.get(gmail,50);
    mail(gmail);


    return 0;
}
