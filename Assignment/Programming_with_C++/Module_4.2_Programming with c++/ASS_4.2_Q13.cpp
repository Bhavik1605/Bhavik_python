#include<iostream>
using namespace std;

class Large{
	private:
		int a,b;
	
	public:	
		void input()
		{
			cout<<"Enter 1st Value : ";
			cin>>a;
		
			cout<<"Enter 2nd Value : ";
			cin>>b;
		}
		
		friend int max(Large &obj);
};

int max(Large &obj)
{
	if(obj.a>obj.b)
	{
		return obj.a;
	}
	else
	{
		return obj.b;
	}
}

int main()
{
	Large l;
	
	l.input();
	
	
	cout<<endl<<"Maximum number is : "<<max(l);
	return 0;
}
