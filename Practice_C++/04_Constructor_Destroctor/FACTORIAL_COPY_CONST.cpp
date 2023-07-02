// find the factorial of a number using copy constructor.

#include<iostream>
using namespace std;

class Fact{
	double fact,n;
	public:
		Fact(double x)
		{
			n=x;
			fact=1;
		}
		Fact(Fact &obj)//copy constructor
		{
			n=obj.n;
			fact=1;
		}
		void cal()
		{
			for(int i=1;i<=n;i++)
			{
				fact=fact*i;
			}
		}
		void display()
		{
			cout<<endl<<"Factoial of "<<n<<" number is : "<<fact;
		}
};

int main()
{
	double n;
	
	cout<<"Enter Value to Find Fectorial : ";
	cin>>n;
	
	Fact f1(n);
	f1.cal();
	f1.display();
	
	Fact f2(f1);
	f2.cal();
	f2.display();
	
	return 0;
}
