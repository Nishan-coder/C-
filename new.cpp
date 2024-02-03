#include<iostream>
using namespace std;
class complex{
    int a,b;
public:
complex(){}
    complex(int x, int y)
    {
    a=x;
    b=y;
    }
    void display()
    {
        cout<<"sum of real and imaginary numbers are:"<<a<<"+i"<<b;
    }
    complex operator +(complex c)
    {
        complex z;
        z.a=a+c.a;
        z.b=b+c.b;
        return z;
    }
};
int main()
{
    complex c1(10,20);
    complex c2(20,30);
    complex c3=c1+c2;
    c3.display();
    return 0;
}
