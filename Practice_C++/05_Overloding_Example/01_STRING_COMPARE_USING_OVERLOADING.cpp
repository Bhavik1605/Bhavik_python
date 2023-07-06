/*  C++ Program to Compare Two Strings using Overloading  */

#include<iostream>
using namespace std;

class compare{
	private:
		string name;
	public:
		void get()
		{
			fflush(stdin);
			
			cout<<"Enter a string : ";
			getline(cin,name);
		}
		
		int operator ==(compare obj)
		{
			if(name==obj.name)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};

int main()
{
	
	compare c1,c2,c3;
	
	c1.get();
	c2.get();
	
	if(c1==c2)
	{
		cout<<endl<<"Both string are same";
	}
	else
	{
		cout<<endl<<"Both string are different";
	}
	
	return 0;
}
