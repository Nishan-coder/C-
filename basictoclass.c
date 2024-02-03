#include<iostream>
using namespace std;
class strings{
    char *name;
    int length;
public:
    strings(){}
    strings(char *s)
    {
        length=strlen(s);
        name=new char[length];
        srcpy(name,s)
    }
    void display()
    {
        cout<<"\n name="<<name;
    }
};
int main()
{
    strings s1,s2;
    char *name1="Sohan";
    char *name 2="mohan";
    s1=strings(name1);
    s2=name2;
    s1.display;
    s2.display;
    return 0;
}
