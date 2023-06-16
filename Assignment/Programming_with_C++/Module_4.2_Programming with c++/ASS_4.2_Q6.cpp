//Hierarchical Inheritance perform between student and teacher with person base class

#include<iostream>
using namespace std;

class person{
	public:
		string name;
		int age;
		
	void typeS()
	{
		fflush(stdin);
		
		cout<<"-----Enter_Data_for_Student-------\n";
		
		cout<<"Enter Student name : ";
		getline(cin,name);
	
		cout<<"Enter Student age : ";
		cin>>age;
	}
	
	void typeT()
	{
		fflush(stdin);
		cout<<"\n-----Enter_Data_for_Teacher-------\n";
		
		cout<<"Enter Teacher name : ";
		getline(cin,name);
	
		cout<<"Enter Teacher age : ";
		cin>>age;
	}
		
};

class student:public person{
	public:
		float pr;
		
		void st()
		{
			cout<<"Enter your Percentage : ";
			cin>>pr;
		}
		
		void displayS()
		{
			cout<<"\n------Student Detail--------\n";
			cout<<"Your name is : "<<name<<endl;
			cout<<"Your age is : "<<age<<endl;
			cout<<"Your percentage is : "<<pr<<endl;
		}
		
};

class teacher:public person{
	public:
		double salary;
		
		void te()
		{
			cout<<"Enter your Salary : ";
			cin>>salary;
		}
		
		void displayT()
		{
			cout<<"\n------Teacher Detail--------\n";
			cout<<"Your name is : "<<name<<endl;
			cout<<"Your age is : "<<age<<endl;
			cout<<"Your salary is : "<<salary<<endl;
		}
};
int main()
{	
	student s;
	s.typeS();
	s.st();

	teacher t;	
	t.typeT();
	t.te();
	
	s.displayS();
	t.displayT();
	
	return 0;
}
