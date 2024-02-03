#include<iostream>
using namespace std;
class date{
int day,month,year;
public:
date(){}
date(int day, int month, int year)
{
    this->day=day;
    this->month=month;
    this->year=year;
}
bool isleapyear()
{
    if(year%4==0 && (year%100!=0 || year%400==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void operator ++(int)
{
if(month==1 && day==31)
{
    month++;
    day=1;
}
else if(month==2)
{
    if(day==28 && !isleapyear())
    {
        month++;
        day=1;
    }
     else if(day==29 && isleapyear())
    {
        month++;
        day=1;
    }
}
else if(month==3 && day==31)
{
    month++;
    day=1;
}
else if(month==4 && day==30)
{
    month++;
    day=1;
}
else if(month==5 && day==31)
{
    month++;
    day=1;
}
else if(month==6 && day==30)
{
    month++;
    day=1;
}
else if(month==7 && day==31)
{
    month++;
    day=1;
}
else if(month==8 && day==31)
{
    month++;
    day=1;
}
else if(month==9 && day==30)
{
    month++;
    day=1;
}
else if(month==10 && day==31)
{
    month++;
    day=1;
}
else if(month==11 && day==30)
{
    month++;
    day=1;
}
else if(month==12 && day==31)
{
    year++;
    month=1;
    day=1;
}
else{
        day++;
}
}


void operator --(int)
{
if(month==1 && day==1)
{
    month=12;
    day=31;
    year--;
}
else if(month==2 && day==1)
{
  month=1;
  day=31;
}
else if(month==3 && day==1)
{
   if(isleapyear())
   {
       day=29;
   }
   else{
    day=28;
   }
    month=2;
}
else if(month==4 && day==1)
{
    month--;
    day=31;
}
else if(month==5 && day==1)
{
    month--;
    day=30;
}
else if(month==6 && day==1)
{
    month--;
    day=31;
}
else if(month==7 && day==1)
{
    month--;
    day=30;
}
else if(month==8 && day==1)
{
    month--;
    day=31;
}
else if(month==9 && day==1)
{
    month--;
    day=31;
}
else if(month==10 && day==1)
{
    month--;
    day=30;
}
else if(month==11 && day==1)
{
    month--;
    day=31;
}
else if(month==12 && day==1)
{
    month=11;
    day=30;
}
else{
        day--;
}
}
void display()
{
    cout<<"date is"<<year<<"/"<<month<<"/"<<day<<endl;
}
date operator +(int x)
{
    date temp(day,month,year);
    for(int i=0;i<x;i++)
    {
        temp ++;
    }
    return temp;
}
date operator -(int x)
{
    date temp(day,month,year);
    for(int i=0;i<x;i++)
    {
        temp--;
    }
    return temp;
}
};
int main()
{
    date d1(17,12,2003);
    d1=d1-10000;
    d1.display();
    return 0;
}
