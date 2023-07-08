/* Overload the - (Unary) should negate the numbers stored in Array */

#include<iostream>
using namespace std;

class Array{
	private:
		int a[100][100],r,c;
	public:
		void accept()
		{
			cout<<"Enter No. of Row for Matrix : ";
			cin>>r;
			
			cout<<"Enter No. of column for Matrix : ";
			cin>>c;
			
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cout<<"\nEnter Matrix Element ["<<i<<"]["<<j<<"] : ";
					cin>>a[i][j];
				}
			}
		}
		
		void display()
		{
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cout<<" "<<a[i][j];
				}
				cout<<endl;
			}
		}
		
		void operator -()
		{
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					a[i][j]=-a[i][j];
				}
			}
		}
};

int main()
{
	Array a1;
	
	a1.accept();
	cout<<"\nThis is Your Matrix : "<<endl;
	a1.display(); //Displayinh Matrix
	
	-a1; //Calling Overloaded Unary Operator
	
	cout<<"\nDisplaying Negated Numbers Stored in a Matrix : "<<endl;
	a1.display(); //Displaying Negated Numbers Stored in a Matrix
	
	return 0;
}
