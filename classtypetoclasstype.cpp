#include<iostream>
using namespace std;
class product{
    int m,n;
public:
    void setdata(int x, int y)
    {
        m=x;
        n=y;
    }
    int getm()
    {
        return m;
    }
    int getn()
    {
        return n;
    }
};
class item{
    int a,b;
public:
    void display()
    {
        cout<<"value of a and b is "<<a<< "\t"<<b;
    }
    item(){}
    item(product p)
    {
        a=p.getm();
        b=p.getn();
    }
};

int main()
{
    item i1;
    product p1;
    p1.setdata(30,40);
    i1=p1;
    i1.display();
    return 0;
}
