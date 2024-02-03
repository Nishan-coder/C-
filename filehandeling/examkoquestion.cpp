#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student{
public:
    int regno;
    string name;
    string contactno;
    string faculty;
    string address;
};
int main()
{
    ofstream fout;
    fout.open("nishan.dat");
    student s1;
    for(int i=0;i<4;i++)
    {
        cout<<"please enter the name of student"<<i+1<<":"<<endl;
        cout<<"register number: ";
        cin>>s1.regno;
        cout<<"name:  ";
        cin>>s1.name;
        cout<<"contact number:  ";
        cin>>s1.contactno;
        cout<<"address: ";
        cin>>s1.address;
    fout<<s1.regno<<" "<<s1.name<<" "<<s1.contactno<<" "<<s1.faculty<<" "<<s1.address<<endl;
    }
    fout.close();
    return 0;
}
