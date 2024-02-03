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
        cout<<a<<"+i"<<b;
    }
    operator int()
    {
        return a;
    }
};
int main()
{
    complex c1;
    c1.setdata(4,5);
    int x;
    x=c1;
    cout<<"x="<<x;
    return 0;
}
