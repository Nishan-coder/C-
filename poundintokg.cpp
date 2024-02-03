#include<iostream>
using namespace std;
class pound;
class kilogram;
class kilogram{
    float k;
public:
    kilogram(){}
    kilogram(float k)
    {
        this->k=k;
    }
        void Display()
    {
      cout<<k<<" Killograms."<<endl;
    }
    operator pound();
};
class pound
{
    float p;
public:
    pound(){}
    pound(float p)
    {
    this->p=p;
    }
    void Display()
    {
      cout<<p<<" Pounds."<<endl;
    }

    operator kilogram();
};
pound::operator kilogram()
{
kilogram temp(p*2.205);
return temp;
}
kilogram::operator pound()
{
pound temp(k/2.205);
return temp;
}
int main()
{
    pound p1;
    kilogram k1(20);
    p1=k1;
    p1.Display();
    pound p2(20);
    kilogram k2;
    k2=p2;
    k2.Display();
    return 0;
}
