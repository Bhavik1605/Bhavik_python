#include<iostream>
using namespace std;

class bank{
	public:
		string name,account;
		double num,bal;
		
		void datamember()
		{
			fflush(stdin);
			
			cout<<"Name of the Depositer : ";
			getline(cin,name);
			cout<<"Account Number : ";
			cin>>num;
			
			fflush(stdin);
			
			cout<<"Type of Account : ";
			getline(cin,account);
			cout<<"Balance Amount in the Account : ";
			cin>>bal;
		}
		
		void deposit()
		{
			double deamo;
			
			cout<<endl<<"Enter Deposit Amount : ";
			cin>>deamo;
			bal+=deamo;
		}
		
		void withdraw()
		{
			double weamo;
			
			cout<<endl<<"Enter Withdraw an Amount : ";
			cin>>weamo;
			
			if(weamo<bal)
			{
				bal-=weamo;
			}
			else
			{
				cout<<endl<<"Can not Withdraw an Amount"<<endl;
			}
			
			
		}
		
		void display()
		{
			cout<<endl<<"Name of the Depositer : "<<name<<endl;
			cout<<"Account Number : "<<num<<endl;
			cout<<"Type of Account : "<<account<<endl;
			cout<<"Balance Amount in the Account : "<<bal<<endl;
		}
};

int main ()
{
	cout<<"---------Enter_Details--------\n";
	
	bank b;
	
	b.datamember();
	b.deposit();
	b.withdraw();
	b.display();
	
	return 0;
}
