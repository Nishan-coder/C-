#include<iostream>
using namespace std;
class calculate
{
    int a;
public:
    calculate(){}
    calculate(int x)
    {
    a=x;
    }
    void display()
    {
        cout<<"the pre increment of a is:"<<a;
    }
    calculate operator ++()
    {
    calculate temp;
    temp.a=++a;
    return temp;
    }
};
int main()
{
    calculate c1(20);
    calculate c2=++c1;
    c2.display();
    return 0;
}
