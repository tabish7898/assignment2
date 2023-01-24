#include<iostream>
#include<cstring>
using namespace std;
class student {
int marks,clas;

public:

     student(int m,int c)
     {
         marks =m;
         clas = c;

     }
     void show()
     {


         cout<<" class = "<<clas<<" marks = "<<marks<<endl;
     }
};
int main()
{
    student s1(50,6);
    s1.show();
    return 0;
}
