#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
   /* ofstream fout;
    fout.open("nishan.dat");
    fout<<"nishan is my name";
    fout.close();*/
    ifstream fin;
    fin.open("nishan.dat");
    string str;
    while(fin.eof()==0)
    {
        getline(fin,str);
        cout<<str;
    }
    fin.close();
    return 0;
}


