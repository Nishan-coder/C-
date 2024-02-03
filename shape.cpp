#include<iostream>
using namespace std;
class shape
{
    public:
        virtual void area()=0;
        virtual void display()=0;
};
class circle:public shape
{
    float r,csa;
    public:
        circle(){};
        circle(float r)
        {
            this->r=r;
        }
        void area()
        {
             csa=(22/7)*r*r;
        }
        void display()
        {
            cout<<"area of circle is:"<<csa<<endl;
        }
};
class trapezoid:public shape
{
    float a,b,h,csa;
public:
    trapezoid(){};
trapezoid(float a, float b, float h)
{
    this->a=a;
    this->b=b;
    this->h=h;
}
    void area()
    {
        csa=0.5*h*(a+b);
    }
    void display()
    {
        cout<<"area of trapezoid is:"<<csa<<endl;
    }
};
class rectangle:public shape
{
    float l,b,csa;
    public:
        rectangle(){};
        rectangle(float l, float b)
        {
            this->l=l;
            this->b=b;
        }
        void area()
        {
            csa=l*b;
        }
        void display()
        {
            cout<<"area of rectangle is:"<<csa<<endl;
        }
};
int main()
{
    circle c1(10);
    trapezoid t1(10,20,40);
    rectangle r1(20,32);
    shape *s[3];
    s[0]=&c1;
    s[1]=&t1;
    s[2]=&r1;
    for(int i=0;i<3;i++)
    {
        s[i]->area();
        s[i]->display();
        cout<<endl;
    }

    return 0;
}
