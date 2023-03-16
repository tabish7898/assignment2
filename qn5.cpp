#include<iostream>
using namespace std;
class invent1
{
public:
    float x;
    operator float()
    {
        return x;
    }
};
class invent2
{
    float y;
public:
    invent2(invent1 i)
    {
        y=i.x;
    }
};
