#include<iostream>
using namespace std;
float sum;
void add(float &a,float &b,float &sum)
{
    sum=a+b;
}
void display()
{
    cout<<sum;
}
int main()
{
    float x,y;
    x=5;
    y=1;
    sum=0;
    add(x,y,sum);
    display();
    return 0;
}

