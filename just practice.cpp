#include<iostream>
using namespace std;
class element{
    int value[10];
    friend void average(element);
public:
    void input();
    void display();
};
void element::input()
{
    for(int i=0;i<10;i++)
    {
        cout<<"enter the value of element:"<<i+1;
        cin>>value[i];
    }
}
void element::display()
{
    for(int i=0;i<10;i++)
    {
        cout<<"value of element"<<i+1<<"is"<<value[i];
    }
}
void average(element x)
{
  float sum=0;
    for(int i=0;i<10;i++)
    {
    sum+=x.value[i];
}
cout<<"average of ten elements is:"<<sum/10;
}
int main()
{
    element a;
    a.input();
    a.display();
    average(a);
    return 0;
}
