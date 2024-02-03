#include<iostream>
using namespace std;
int sum(int,int,int=0);
int main()
{
    int a,b,c;
    cout<<"please enter the three numbers:";
cin>>a>>b;
cout<<"sum of two numbers is:"<<sum(a,b)<<endl;
cout<<"sum of three numbers is:"<<sum(a,b,c);
return 0;
}
int sum(int x,int y)
{
    return x+y;
}
int sum(int x,int y, int z)
{
    return x+y+z;
}
