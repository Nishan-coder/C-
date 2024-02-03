#include<iostream>
using namespace std;
class calculate{
    int a,b;
public:
    calculate(){}
    calculate(int c)
    {
        a=c;
        b=0;
    }

    void display()
    {
        cout<<"a="<<a<<"\t b="<<b;
    }
};
int main()
{
    calculate c1;
    int x=5;
    c1=x;
    c1.display();
    return 0;
}
