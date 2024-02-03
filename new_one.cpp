#include<iostream>
using namespace std;
class kg
{
float k;
public:
    kg(){}
    kg(lb temp)
    {
    k=2.2046*temp.lb_getter();
    }
};

class lb
{
float l;
public:
    float lb_getter(){return l;}
    operator kg()
};

int main()
{
kg k;
lb l;
k=l;
return 0;
}
