#include<iostream>
#include<cmath>
using namespace std;
class triangle{
    float a,b,c;
    public:
    triangle(){}
    triangle(float a,float b, float c)
    {
        if(a+b<=c || a+c<=b ||b+c<=a)
        {
            throw("invalid triangle");
        }
        this->a=a;
        this->b=b;
        this->c=c;
    }
    float area()
    {
        float s=(a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    float perimeter()
    {
        return a+b+c;
    }
};
int main()
{
    float a,b,c;
    cout<<"please enter the values of triangle: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    try
    {
        triangle t1(a,b,c);
        cout<<"area of triangle is:"<<t1.area()<<endl;
        cout<<"perimeter of triangle is:    "<<t1.perimeter()<<endl;
    }
    catch(const char *msg)
    {
        cerr<<msg<<endl;
    }
    return 0;
    }
