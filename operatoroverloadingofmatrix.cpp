#include<iostream>
using namespace std;
class matrix
{
    int row,column;
    float **a;
    public:
    matrix(){}
    matrix(int row, int column)
    {
        this->row=row;
        this->column=column;
        a=new float*[column];
        for(int i=0;i<row;i++)
        {
           a[i]=new float[row];
        }
    }
    void input()
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cout<<"enter a["<<i+1<<"]["<<j+1<<"].\t";
                cin>>a[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    matrix operator +(matrix z)
    {
        matrix temp(row,column);
          for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
               temp.a[i][j]=a[i][j]+z.a[i][j];
            }

        }
        return temp;
    }
        matrix operator -(matrix z)
    {
        matrix temp(row,column);
          for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
               temp.a[i][j]=a[i][j]-z.a[i][j];
            }

        }
        return temp;
    }
   matrix operator *(float z)
    {
        matrix temp(row,column);
          for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
               temp.a[i][j]=a[i][j]*z;
            }

        }
        return temp;
    }
};
int main()
{
    float f=5;
    matrix m1(3,3);
    matrix m2(3,3);
    matrix m3(3,3);
    matrix m4(3,3);
    m1.input();
    m2.input();
    m3.input();
    //m3=m1+m2;
    //m3=m1-m2;
   // m3=m1*f;
    m4= (m2*5)-(m1*2)+(m3*6);
    m4.display();
    return 0;
}
