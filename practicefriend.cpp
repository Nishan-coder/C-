#include<iostream>
using namespace std;
class element{
    private:
    int ar[10];
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
        cin>>ar[i];
    }
}
void element::display()
{
    for(int i=0;i<10;i++)
    {
        cout<<"\n value of element"<<i+1<<"is"<<ar[i];
    }
}
void average(element x)
{
    float sum=0;
    for(int i=0;i<10;i++)
    {
        sum+=x.ar[i];
    }
    cout<<"\n average of 10 elements ="<<sum/10;
}
int main()
{
    element a,b;
    a.input();
    b.input();
    a.display();
    b.display();
    average(a);
    average(b);
    return 0;
}
