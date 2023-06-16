// program to find the multiplication values and the cubic values using inline function 

#include<iostream>
using namespace std;

class cal{
	
	public:
		
		inline float mul(float a,float b)
		{
			return(a*b);
		}
		
		inline double cube(float a)
		{
			return(a*a*a);
		}
};

int main()
{
	float a,b;
	
	cal c;
	
	cout<<"Enter 1st value : ";
	cin>>a;
	
	cout<<"Enter 2nd value : ";
	cin>>b;
	
	cout<<"\nMultiplication is : "<<c.mul(a,b);
	
	cout<<"\n\nCube Value of "<<a<<" is : "<<c.cube(a);
	cout<<"\nCube Value of "<<b<<" is : "<<c.cube(b);
	
	return 0;
}
