#include<iostream>
using namespace std;
class car{
public:
   void gear()
    {
        cout<<"this car has gear controlling system";
    }
};
class bike:public car{
public:
    void gear()
    {
    cout<<"this bike has gear controlling system";
    }
};
int main()
{
    car *p;
    bike b;
    p=&b;
    p->gear();
    return 0;
}
