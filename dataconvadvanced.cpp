#include<iostream>
using namespace std;
class fin;
class mcm;
class mcm{
    float m,cm;
public:
    mcm(){}
    mcm(float m, float cm)
    {
        this->m=m;
        this->cm=cm;
    }
    void display()
    {
        cout<<m<<"  meter"<<endl;
        cout<<cm<<" centimeter"<<endl;
    }
    operator fin();
};
class fin
{
    float f,i;
public:
    fin(){}
    fin(float f, float i)
    {
        this->f=f;
        this->i=i;
    }
    void display()
    {
        cout<<f<<" feet"<<endl;
        cout<<i<<"  inch"<<endl;
    }
    operator mcm();
};
fin::operator mcm()
{
    float totalinch,totalmeter,totalcentimeter;
    totalinch=f*12+i;
    totalcentimeter=totalinch*2.54;
    totalmeter=(int)totalcentimeter/100;
    totalcentimeter=totalcentimeter-100*totalmeter;
    fin temp(totalmeter,totalcentimeter);
    return temp;
}

int main()
{
mcm m1;
fin f1(10,20);
m1=f1;
m1.display();
mcm m2(20,30);
fin f2;
//f2=m2;
//f2.display();
return 0;
}
