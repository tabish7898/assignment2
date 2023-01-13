#include<iostream>
using namespace std;
void max (int x,int y)
{
   int r;
   r=x>y?x:y;
   cout <<r;
}
void max(int x,float y)
{
    float r;
   r=x>y?x:y;
   cout <<r;
}
void max(float x,int y)
{
    float r;
   r=x>y?x:y;
   cout <<r;
}
void max(float x,float y)
{
    float r;
   r=x>y?x:y;
   cout <<r;
}
int main()
{

    return 0;
}
