#include<iostream>
using namespace std;
class fin
{
    int feet,inches;
public:
    fin(){}
    fin(int feet, int inches)
    {
        this->feet=feet;
          this->inches=inches;
          }
          void display()
          {
              cout<<"feet and inches is:"<<feet<<","<<inches<<endl;
          }
          fin operator +(fin f)
          {
              fin temp;
              temp.feet=feet+f.feet;
              temp.inches=inches+f.inches;
              if(temp.inches>12)
              {
                  temp.feet=temp.feet+temp.inches/12;
                  temp.inches=temp.inches%12;
              }
              return temp;

          }
};
int main()
{
    fin f1(5,11);
    fin f2(26,100);
    fin f3=f1+f2;
    f3.display();
    return 0;
}
