#include<iostream>
using namespace std;
class complex{
int a,b;
public:
void setdata(int x,int y){
             a=x;
             b=y;
}
void showdata()
{
    cout<<"a:"<<a<<"b:"<<b;
}
complex add(complex c)
{
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
}
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(10,20);
    c2.setdata(20,40);
    c3=c2.add(c1);
    c3.showdata();
    return 0;
}
