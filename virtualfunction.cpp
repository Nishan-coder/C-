#include<iostream>
using namespace std;
class students
{
    public:
        virtual void speak()=0;
};
class engineering:public students
{
   public:
       void speak()
       {
           cout<<"hello i am engineering student"<<endl;
       }
};
class medicine:public students
{
   public:
       void speak()
       {
           cout<<"hello i am medical student"<<endl;
       }
};
class science:public students
{
    public:
        void speak()
        {
            cout<<"hello i am science student"<<endl;
        }
};
int main()
{
    students *s[3];
    s[0]=new engineering;
    s[1]=new medicine;
    s[2]=new science;
    for(int i=0;i<3;i++)
    {
        s[i]->speak();
    }
    return 0;
}
