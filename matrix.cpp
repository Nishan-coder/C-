#include<iostream>
using namespace std;
class matrix{
    int row,column;
float **a;
    public:
        matrix(){
        cout<<"please enter the row"<<endl;
        cin>>row;
        cout<<"please enter the column"<<endl;
        cin>>column;
        }

    matrix(int row, int column)
    {
        this->row=row;
        this->column=column;
        		a = new float *[row];
		for (int i = 0; i < column; i++)
		{
			a[i] = new float[column];
		}
    }
    void input()
    {
    for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cout << "Enter the a[" << i + 1 << "][" << j + 1 << "] Element.\t";

                cin>>a[i][j];
            }
        }
    }
    void display()
    	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				cout << a[i][j] << "\t";
			}
			cout << endl;
		}
	}
};
int main()
{
    matrix m;
    m.input();
    m.display();
    return 0;
}
