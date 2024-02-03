#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("student.dat");
    string str;
    while(fin.eof()==0)
    {
        getline(fin,str);
        cout<<str;
    }
    fin.close();
    return 0;
}
