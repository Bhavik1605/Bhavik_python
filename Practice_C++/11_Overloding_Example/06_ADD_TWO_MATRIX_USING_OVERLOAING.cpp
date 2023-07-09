#include<iostream>
using namespace std;

class Add{
	public:
		int a[100][100],r,c;
		
	public:
		void input()
		{
			cout<<"Enter No. of Row for Matrix : ";
			cin>>r;
			
			cout<<"Enter No. of Column for Matrix : ";
			cin>>c;
		}
		
		void Acc()
		{
			cout<<"Enter No. of Row for Matrix : ";
			cin>>r;
			
			cout<<"Enter No. of Column for Matrix : ";
			cin>>c;
			
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cout<<endl<<"Element Number ["<<i<<"] ["<<j<<"] : ";
					cin>>a[i][j];
				}
			}
		}
		
		void Dis()
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
		
		Add operator +(Add obj)
		{
			int sum[100][100];
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					sum[i][j]=a[i][j]+obj.a[i][j];
				}
			}
			
			cout<<endl<<"-------Addition_of_Two_Matrix------------"<<endl;
			
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cout<<" "<<sum[i][j];
				}
				cout<<endl;
			}
		}
};

int main()
{
	Add a1,a2,a3;
	
	cout<<"----------FIRST_MATRIX-----------"<<endl;
	a1.Acc();
	
	cout<<endl<<"----------SECOND_MATRIX-----------"<<endl;
	a2.Acc();
	
	cout<<endl<<"----------DISPLAY_FIRST_MATRIX-----------"<<endl;
	a1.Dis();
	
	cout<<endl<<"----------DISPLAY_SECOND_MATRIX-----------"<<endl;
	a2.Dis();
	
	a3=a1+a2;
	
	return 0;
}
