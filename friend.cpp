#include <iostream>
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
        cout<<"please enter the value of element"<<i+1<<"\t";
        cin>>value[i];
    }
}
void element::display()
{
    for(int i=0;i<10;i++)
    {
        cout<<"\n the value of element"<<i+1<<"is\t"<<value[i];
    }
}
void average(element x)
{
   float sum =0;
    for(int i=0;i<10;i++)
    {
        sum+=x.value[i];
    }
    cout<<"\n the average of ten element is:"<<sum/10;
}
int main()
{
    element a;
    a.input();
    a.display();
    average(a);
}
