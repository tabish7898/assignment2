#include<iostream>
#include<stdlib.h>
using namespace std;
class student
{
    string name;
    int age;
public:
    student()
    {
        cout<<"constructor is called"<<endl;
    }
    student(string n,int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout<<"name : "<<name<<endl<<"age : "<<age<<endl;
    }
    void * operator new (size_t size)
    {
        cout<<" new operator : "<<size<<endl;
        void *p = malloc(size);
        return p;
    }
    void operator delete(void *p)
    {
        cout<<"delete operator "<<endl;
        free(p);
    }

};
int main()
{
    student *p = new student("tabish",22);
    p->display();
    delete p;
    return 0;
}
