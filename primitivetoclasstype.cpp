#include<iostream>
using namespace std;
class complex{
    int a,b;
public:
    void setdata(int x, int y)
    {

        a=x;
        b=y;
    }
    void display()
    {

        cout<<"value of a+ib is:"<<a<<"+i"<<b<<endl;
    }
    operator int()
    {
        return a+b;
    }
};
int main()
{
    complex c1;
    c1.setdata(4,5);
    c1.display();
    int x;
    x=c1;
    cout<<"value of x is:"<<x;
    return 0;
}
