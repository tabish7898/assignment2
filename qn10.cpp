#include<iostream>
using namespace std;
class dollar

{
    public:
    int dollars;

  dollar( int d)
  {
      dollars =d;
  }

};
class rupee
{
    public:
   int rupees;

       rupee(int x)
       {
           rupees = x;
       }
       rupee(dollar d)
       {
           rupees = d.dollars;
       }
       void display()
       {
           cout<<"rupees = "<<rupees;
       }
      //dollar operator dollar()
       //{
         //  dollar x;
           //x.dollars=rupees;
           //return x;
       //}

};
int main()
{
    rupee r=24;
    r.display();
    dollar d = 45;
    rupees s = d;
}
