#include<iostream>
using namespace std;
class Time {
int hours,minutes,second;
public:
    void set()
    {
        cout<<"Enter hours:minutes:second "<<endl;
        cin>>hours>>minutes>>second;
    }

};
