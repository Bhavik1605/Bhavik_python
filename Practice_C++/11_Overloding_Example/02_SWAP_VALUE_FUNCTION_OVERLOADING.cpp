/* SWAP VARIABLES USING Function Overloading */

#include<iostream>
using namespace std;

class Cal{
	public:
		void swap(int &a,int &b)
		{
			int temp;
			temp=a;
			a=b;
			b=temp;
		}
		void swap(float &a,float &b)
		{
			int temp;
			temp=a;
			a=b;
			b=temp;
		}
		void swap(char &a,char &b)
		{
			int temp;
			temp=a;
			a=b;
			b=temp;
		}
};

int main()
{
	int ix,iy;
	float fx,fy;
	char cx,cy;
	
	Cal c1;
	
	cout<<"---------Input_Integer_Value-----------"<<endl;
	
	cout<<"Enter First Integer Number : ";
	cin>>ix;
	
	cout<<"Enter Second Integer Number : ";
	cin>>iy;
	
	cout<<endl<<"---------Input_Float_Value-----------"<<endl;
	
	cout<<"Enter First Float Number : ";
	cin>>fx;
	
	cout<<"Enter Second Float Number : ";
	cin>>fy;
	
	cout<<endl<<"---------Input_Charecter_Value-----------"<<endl;
	
	cout<<"Enter First Charcters Number : ";
	cin>>cx;
	
	cout<<"Enter Second Charcters Number : ";
	cin>>cy;
	
	cout<<endl<<"---------Integer_Swapping-----------"<<endl;
	cout<<"Before Swapping : x = "<<ix<<" y = "<<iy;
	c1.swap(ix,iy);
	cout<<endl<<"After Swapping : x = "<<ix<<" y = "<<iy<<endl;
	
	cout<<endl<<"---------Float_Swapping-----------"<<endl;
	cout<<"Before Swapping : x = "<<fx<<" y = "<<fy;
	c1.swap(fx,fy);
	cout<<endl<<"After Swapping : x = "<<fx<<" y = "<<fy<<endl;
	
	cout<<endl<<"---------Charecter_Swapping-----------"<<endl;
	cout<<"Before Swapping : x = "<<cx<<" y = "<<cy;
	c1.swap(cx,cy);
	cout<<endl<<"After Swapping : x = "<<cx<<" y = "<<cy<<endl;
	
	return 0;
}
