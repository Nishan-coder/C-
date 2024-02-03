#include<iostream>
using namespace std;
class student{
    char name[20];
    int roll;
    float marks[3];
    float total=0;
public:
    void getdata();
    void display();
};
void student::getdata()
{
    cout<<"please enter the name of student";
    cin>>name;
    cout<<"\n please enter the roll number of student";
    cin>>roll;
    cout<<"\n please enter the marks in three subjects:";
    for(int i=0;i<3;i++)
    {
        cin>>marks[i];
        total+=marks[i];
    }
}
void student:: display()
{
    cout<<"\n the name of student is"<<name;
    cout<<"\n the roll number of student is"<<roll;

    for(int i=0;i<3;i++)
    {
        cout<<"\n marks is"<<marks[i];
    }
cout<<"total marks is"<<total;
}
int main()
{
student s[5];
for(int i=0;i<5;i++)
{
    s[i].getdata();
}
for(int i=0;i<5;i++)
{
    s[i].display();
}
return 0;
}
