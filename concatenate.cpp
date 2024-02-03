#include<iostream>
#include<string.h>
using namespace std;
class strings{
    char *str;
public:
    strings(){};
    strings(char *s)
    {
        str=s;
    }
    void display()
    {
        cout<<str<<endl;
    }
    strings operator +(strings s)
    {
        strings temp;
        strcat(temp.str,str);
        strcat(temp.str,s.str);
        cout<<temp.str;

    }
};
int main()
{
    strings s1("javed");
    strings s2("ansari");
    strings s3=s1+s2;
    s3.display();
    return 0;
}
