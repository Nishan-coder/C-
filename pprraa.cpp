#include<iostream>
using namespace std;
class complex{
    int a,b;
public:
    void valuesetter(int x, int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"sum of real and imaginary number is:"<<a<<"+i"<<b;
    }
    complex add(complex c)
    {
        complex z;
        z.a=a+c.a;
        z.b=b+c.b;
        return z;
    }
};
int main ()
{
    complex c1,c2,c3;
    c1.valuesetter(30,40);
    c2.valuesetter(330,405);
    c3=c1.add(c2);
    c3.display();
    return 0;
}
