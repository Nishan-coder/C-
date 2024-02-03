#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class students
{
public:
    int regno;
    string name;
    string contactno;
    string program;
    string address;
};
int main()
{
    ofstream fout("bastola.dat");
    students s1;
    for(int i=0;i<1;i++)
    {
        cout<<"please enter the information of student"<<i+1<<":"<<endl;
        cout<<"Registration number:";
        cin>>s1.regno;
        cin.ignore();
        cout<<"Name:";
        getline(cin,s1.name);
        cout<<"Contact Number:";
       getline(cin,s1.contactno);
        cout<<"Program:";
        getline(cin,s1.program);
        cout<<"Address:";
        getline(cin,s1.address);
    }
    fout<<s1.regno<<""<<s1.name<<""<<s1.contactno<<""<<s1.program<<""<<s1.address<<endl;
    fout.close();

    ifstream fin("bastola.dat");
    cout<<"Information of all students:"<<endl;
    while(fin>>s1.regno>>s1.name>>s1.contactno>>s1.program>>s1.address)
    {
        cout<<"Registration number:"<<s1.regno<<endl;
        cout<<"Name:"<<s1.name<<endl;
        cout<<"Contact Number:"<<s1.contactno<<endl;
        cout<<"Program:"<<s1.program<<endl;
        cout<<"Address:"<<s1.address<<endl<<endl;
        fin.close();
    }
    return 0;
}
