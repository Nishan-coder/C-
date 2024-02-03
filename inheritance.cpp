#include<iostream>
using namespace std;
class base{
protected:
    int n;
public:
    void input()
    {
        cout<<"hello world";
    }
};
class child:public base
{

};
int main()
{
    child c1;
    c1.input();
    return 0;
}
