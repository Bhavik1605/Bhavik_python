#include<iostream>
#include<math.h>
using namespace std;

class FD{
	private:
		int no,month;
		float amt,rate,m_amt,yr;
		string name;
	public:
		FD()
		{
			fflush(stdin);
			
			cout<<"------------Fill_Detail--------------"<<endl;
			
			cout<<"Enter Name : ";
			getline(cin,name);
			cout<<"Enter FD Number : ";
			cin>>no;
			cout<<"Enter Month : ";
			cin>>month;
			cout<<"Enter Amount : ";
			cin>>amt;
			cout<<"Enter Rate : ";
			cin>>rate;
		}
		
		void cal()
		{
			yr=month/12.0;
			m_amt=amt*pow((1+rate/100),yr);
		}
		
		void dis()
		{
			cout<<endl<<"-----------Display_Detail--------------"<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"FD Number : "<<no<<endl;
			cout<<"Month : "<<month<<endl;
			cout<<"Amount : "<<amt<<endl;
			cout<<"Rate is : "<<rate<<endl;
			cout<<"Maturity Amount :  "<<m_amt<<endl;
		}
};

int main()
{
	FD f1;
	f1.cal();
	f1.dis();
	
	return 0;
}
