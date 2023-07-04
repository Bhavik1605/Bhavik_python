//calculate the Sum of square of n numbers using copy constructor.

#include<iostream>
using namespace std;

class Square{
	private:
		double num,sum;
	public:
		Square(double n)
		{
			num=n;
			sum=0;
		}
		Square(Square &obj)
		{	
			for(int i=0;i<=obj.num;i++)
			{
				sum=sum+(i*i);
			}
			
			cout<<endl<<"Sum of Square Upto "<<obj.num<<" Numbers is : "<<sum;
		}
};

int main()
{
	double x;
	
	cout<<"Enter Number : ";
	cin>>x;
	
	Square s1(x);// First Cons.
	Square s2(s1);//Copy Cons. and pass first Cons. Object
	
	return 0;
}
