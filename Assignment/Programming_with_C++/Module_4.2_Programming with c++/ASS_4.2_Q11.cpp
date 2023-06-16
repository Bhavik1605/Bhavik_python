#include<iostream>
using namespace std;

class Area{
	public:
		float are(float l,float b)
		{
			return l*b;
		}
		
		double are(double h,double ba)
		{
			return (h*ba)/2;
		}
		
		float are(float r) 
		{
			return 3.14*r*r;
		}
};

int main()
{
	Area a;
	
	float r,l,b;
	double h,ba;
	
	cout<<"------Area_of_Rectangle-------"<<endl;
	
	cout<<"Enter Length of Rectangle : ";
	cin>>l;
			
	cout<<"Enter Breadth of Rectangle : ";
	cin>>b;
	
	cout<<endl<<"Area of Rectangle is : "<<a.are(l,b)<<endl;
	
	cout<<endl<<"------Area_of_Triangle-------"<<endl;
	
	cout<<"Enter Hight of Triangle : ";
	cin>>h;
			
	cout<<"Enter Base of Triangle : ";
	cin>>ba;
			
	cout<<endl<<"Area of Triangle is : "<<a.are(h,ba)<<endl;
	
	cout<<endl<<"------Area_of_Circle-------"<<endl;
	
	cout<<"Enter Redius of Circle : ";
	cin>>r;
			
	cout<<endl<<"Area of Circle is : "<<a.are(r)<<endl;
	

	
	return 0;
}
