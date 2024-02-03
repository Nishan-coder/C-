#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class book
{
    int bookid;
    char title[20];
    float price;
public:

    book()
    {
        bookid=0;
        strcpy(title,"no title");
        price=0;

    }
    void input()
    {
        cout<<"enter bookid,title and price of a book:  ";
        cin>>bookid;
        cin.ignore();
        cin.getline(title,19);
        cin>>price;
    }
    void display()
    {
        cout<<"\n"<<bookid<<" "<<title<<" "<<price;
    }
    int storebook();
};
int book::storebook()
{
    ofstream fout;
    fout.open("file1.dat",ios::app|ios::binary);
    fout.write()

}
int main()
{
book b1;
b1.input();
b1.display();
}


