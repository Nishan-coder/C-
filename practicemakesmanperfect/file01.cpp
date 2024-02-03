#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("student.dat");
    string name;
    cout<<"please enter your :";
    cin>>name;
    fout<<name;
    fout.close();
    ifstream fin("student.dat");
        string names;
getline(fin,names);
    cout<<"your name is:    "<<names;
    fin.close();
    return 0;
}
