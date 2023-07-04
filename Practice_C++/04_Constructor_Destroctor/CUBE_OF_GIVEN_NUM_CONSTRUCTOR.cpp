//display the cube of the number upto a given integer using Constructor.

#include<iostream>
using namespace std;

class Cube{
	private:
		double n;
	public:
		Cube(double n)
		{
			for(int i=1;i<=n;i++)
			{
				cout<<endl<<"The Cube of "<<i<<" is : "<<(i*i*i)<<endl;
			}
		}
};
int main()
{
	double num;
	
	cout<<"Enter The Number of Terms For Find Cube : ";
	cin>>num;
	
	Cube C1(num);
	
	return 0;
}
