#include<iostream>
using namespace std;

class C{
	public:
		string name;
		
		void input()
		{
			fflush(stdin);
			getline(cin,name);
		}
		
		string operator +(C obj)
		{
			return name+obj.name;
		}
};

int main()
{
	C c1,c2;
	
	cout<<"Enter first string : ";
	c1.input();
	
	cout<<"Enter first string : ";
	c2.input();
	
	cout<<"\nConcatenate String is : "<<c1+c2;
	return 0;
}
