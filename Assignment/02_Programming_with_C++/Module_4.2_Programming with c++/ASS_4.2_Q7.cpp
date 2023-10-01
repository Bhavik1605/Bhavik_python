#include<iostream>
using namespace std;

class student{
	private:
		int rn;
		
	public:
		void inputS()
		{
			cout<<"Enter Your Roll Number : ";
			cin>>rn;
		}
		void displayS()
		{
			cout<<"Your Roll Number : "<<rn<<endl;
		}
};

class test:public student{
	protected:
		int s1,s2;
		
	public:
		void inputT()
		{
			cout<<"Enter 1st Subject Marks : ";
			cin>>s1;
			cout<<"Enter 2nd Subject Marks : ";
			cin>>s2;
		}
		
		void displayT()
		{
			cout<<"Your 1st Subject Marks is : "<<s1<<endl;
			cout<<"Your 2nd Subject Marks is : "<<s2<<endl;
		}
};

class result:public test{
	protected:
		int total;
		
	public:
		void displayR()
		{
			cout<<"\n----------Info-----------\n";
			displayS();
			displayT();
			
			total = s1 + s2;
			
			cout<<"Total Your Marks of Two Subject is : "<<total;
		}
		
		
		
};
int main()
{
	
	result r;
	
	cout<<"----------Enter_Info-----------\n";
	r.inputS();
	r.inputT();
	r.displayR();
	
	return 0;
}
