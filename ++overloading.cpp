#include<iostream>
using namespace std;
class calculate{
    int a;
    calculate(){};
    calculate(int x=5)
    {
        a=x;
    }
    void display()
    {
        cout<<"value of a is:"<<a;
    }
    void operator ++()
    {
        ++a;
    }
};
int main(){
calculate c1();
calculate c2=++c1;
c2.display()
return 0;
}


