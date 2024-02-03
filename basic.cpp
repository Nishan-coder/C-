#include<iostream>
using namespace std;
class student{
    char stu[20];
    int roll;
public:
    void input()
    {
    cout<<"please enter the name";
    cin>>stu;
    cout<<"\n please enter the roll number";
    cin>>roll;
    }
    void display()
    {
        cout<<"\n name is:"<<stu;
        cout<<"\n roll no is:"<<roll;
    }
};
int main()
{
student s1,s2;
s1.input();
s2.input();
s1.display();
s2.display();
return 0;
}
