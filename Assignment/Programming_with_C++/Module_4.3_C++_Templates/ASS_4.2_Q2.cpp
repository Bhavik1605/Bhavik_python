#include<iostream>
using namespace std;

template <class T>
class Short{
	public:
		T a[100],n;
		
		void input()
		{
			cout<<endl<<"Enter Number of Terms for Input Value : ";
			cin>>n;
			
			for(int i=0;i<n;i++)
			{
				cout<<"Element Number ["<<i+1<<"] : ";
				cin>>a[i];
			}
		}
		
		void process_acc()
		{
			for(int i=0;i<n;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(a[i]>a[j])
					{
						T temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
		}
		
		void process_dec()
		{
			
			for(int i=0;i<n;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(a[i]<a[j])
					{
						T temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
		}
		
		void display()
		{
			for(int i=0;i<n;i++)
			{
				cout<<"Element Number ["<<i+1<<"] : "<<a[i]<<endl;
			}
		}
};

int main()
{
	int ch;
	
	Short<int>s1,s2;
	
	cout<<"[1].Accending Order"<<endl;
	cout<<"[2].Decending Order"<<endl;
	
	cout<<endl<<"Enter a choice of the above : ";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			cout<<endl<<"------Input_Elements_for_Accending_Order-------\n";
			s1.input();
			s1.process_acc();
			cout<<"\n-----List_of_Accending_Order------\n";
			s1.display();
			break;
			
		case 2:
			cout<<endl<<"------Input_Elements_for_Decending_Order-------\n";
			s2.input();
			s2.process_dec();
			cout<<"\n-----List_of_Decending_Order------\n";
			s2.display();
			break;
			
		default :
			cout<<endl<<"Choice is Invalid!!!";
			break;
	}
	
	return 0;
}
