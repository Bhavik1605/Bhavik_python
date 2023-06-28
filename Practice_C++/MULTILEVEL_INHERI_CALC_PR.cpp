// calculate the percentage of a student using multi-level inheritance.

#include<iostream>
using namespace std;

class student{
	protected:
		string name;
		int roll,sub[2];
	public:
		void get_data()
		{
			fflush(stdin);
			
			
			cout<<"Enter Your Name : ";
			getline(cin,name);
			cout<<"Enter Your Roll Number : ";
			cin>>roll;
			cout<<endl<<"Enter Marks for Three Subject";
			cout<<endl<<"------------------------------------"<<endl;
			cout<<endl<<"Maths Subject : ";
			cin>>sub[0];
			cout<<endl<<"Science Subject : ";
			cin>>sub[1];
			cout<<endl<<"English Subject : ";
			cin>>sub[2];
			
			if(sub[0]  >100 || sub[1]  >100 || sub[2] >100)
			{
				cout<<endl<<"Please Enter Correct Marks...";
				exit(0);
			}
			
			else if(sub[0]  <33 || sub[1]  <33 || sub[2] <33)
			{
				cout<<endl<<"Sorry..You are Fail !!! Better Luck Next Time....";
				exit(0);
			}
		}
};
class Total:public student{
	protected:
		int total;
	public:
		void sum()
		{
			total = sub[0]+sub[1]+sub[2];
		}
};

class Per:public Total{
	private:
		float pr;
	public:
		void per()
		{
			pr = total/3.00;
		}
		void show()
		{
			cout<<endl<<"---------------Your_Result-----------------"<<endl;
			cout<<endl<<"Your Name is : "<<name;
			cout<<endl<<"Your Roll Number is : "<<roll<<endl;
			cout<<endl<<"-------------------------------------------"<<endl;
			cout<<endl<<"Percentage of a Student : "<<pr;
		}
};

int main()
{
	Per p;
	
	p.get_data();
	p.sum();
	p.per();
	p.show();
	
	return 0;
}
