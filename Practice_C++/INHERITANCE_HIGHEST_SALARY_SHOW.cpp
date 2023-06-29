//Accept all details of managers & Display manager having highest salary and its name.

#include<iostream>
using namespace std;

class Employee{
	public:
		string ename,des;
		double enumber;
		
		void Data()
		{
			fflush(stdin);
			
			cout<<endl<<"-----------Employee_Detail-------------"<<endl;
			
			cout<<"Enter Employee Name : ";
			getline(cin,ename);
			
			cout<<"Enter Your Designation : ";
			getline(cin,des);
			
			cout<<"Enter Employee Mobile Number : ";
			cin>>enumber;
		}
};
class Salary:public Employee{
	public:
		double sal;
		
		void Sal()
		{
			cout<<"Enter Your Basic Salary : ";
			cin>>sal;
		}
};
int main()
{
	Salary s[100];
	
	int ch;
	
	cout<<endl<<"How Many Managers You Want to Enter? : ";
	cin>>ch;
	
	for(int i=1;i<=ch;i++)
	{
		s[i].Data();
		s[i].Sal();
	}
	
	int temp=0;
	
	for(int i=1;i<=ch;i++)
	{
		if(s[temp].sal<s[i].sal)
		{
			temp=i;
		}
	}
	
	cout<<endl<<"Manager with Highest Salary is : "<<s[temp].sal<<" And "<<endl;
	cout<<endl<<"Manager Name is : "<<s[temp].ename;
	
	return 0;
}
