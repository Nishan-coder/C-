#include<iostream>
using namespace std;
template<class t1, class t2>
void calculate(t1 p[],int size,t2 &sum, t2 &av)
{
    for(int i=0;i<size;i++)
    {
        sum+=p[i];
    }
    av=sum/size;
}
int main()
{
    int n[]={1,2,3,4,5};
    float sum=0.0,av;
    calculate(n,5,sum,av);
    cout<<"sum is:  "<<sum<<endl;
    cout<<"average is:  "<<av<<endl;
    return 0;
}
