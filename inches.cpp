#include<iostream>
using namespace std;
class cmm;
class fin;
class cmm{
    float m,cm;
public:
    cmm()
    {
        cout<<"please enter meter and centimeter respectively:"<<endl;
        cin>>m>>cm;
    }
    cmm(float m, float cm)
    {
        this->m=m;
        this->cm=cm;
    }
    void display()
    {
        cout<<m<<"  meter\t";
        cout<<cm<<" centimeter\t"<<endl;
    }
    operator fin();
};
class fin{
    float feet,inch;
public:
    fin()
    {
        cout<<"please enter the feet and inches respectively:"<<endl;
        cin>>feet>>inch;
    }
    fin(float feet, float inch)
    {
        this->feet=feet;
        this->inch=inch;
    }
    void display()
    {
        cout<<feet<<"   feet\t";
        cout<<inch<<"   inch\t"<<endl;
    }
    operator cmm();
};
cmm::operator fin()
{
    float totalinch,totalfeet,totalcentimeter;
    totalcentimeter=m*100+cm;
    totalinch=totalcentimeter/2.54;
    totalfeet=(int)totalinch/12;
    totalinch=totalinch-12*totalfeet;
    fin temp(totalfeet,totalinch);
    return temp;
}
fin::operator cmm()
{
    float totalinch,totalmeter,totalcentimeter;
    totalinch=feet*12+inch;
    totalcentimeter=totalinch*2.54;
    totalmeter=(int)totalcentimeter/100;
    totalcentimeter=totalcentimeter-100*totalmeter;
    cmm temp(totalmeter,totalcentimeter);
    return temp;
}
int main()
{

    cmm c1(0,0);
    fin f1;
    c1=f1;
    c1.display();
    cmm c2;
    fin f2(0,0);
    f2=c2;
    f2.display();
    return 0;
}



