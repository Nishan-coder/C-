#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("nishansharma.dat");
    string name;
    cout<<"please enter your name"<<endl;
    cin>>name;
    fout<<name;
    fout.close();
    return 0;



}

