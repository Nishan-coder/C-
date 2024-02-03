#include<iostream>
using namespace std;
class element{
    int ar[10];
public:
    void input();
    void display();
    void average();
};
void element::input()
{
    for(int i=0;i<10;i++)
    {
        cout<<"please enter the value of element of"<<i+1<<"\t";
        cin>>ar[i];
    }
}
void element::display()
{
    for(int i=0;i<10;i++)
    {
        cout<<"\n the value of element"<<i+1<<"is"<<ar[i];
    }
}
void average()
{
    float sum=0;
    for(int i=0;i<10;i++)
    {
        sum+=ar[i];
        cout<<"\n average of ten elements is"<<sum/10;
    }
}
int main()
{
    element a;
    a.input();
    a.average();
    a.display();
    return 0;
}
