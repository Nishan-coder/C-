#include<iostream>
using namespace std;
class area{
    float radius;
    static float pi;
public:
    void input()
    {
        cout<<"please enter the radius of circle:";
        cin>>radius;
    }
    void calcarea()
    {
    cout<<"area of circle is:"<<pi*radius*radius;
    }
};
float area::pi=3.12;
int main()
{
    area a1;
    a1.input(radius);
    a1.calcarea();
    return 0;
}
