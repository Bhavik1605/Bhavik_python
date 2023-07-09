#include<iostream>
using namespace std;

class complax{
	private:
		float real,img;
	
	public:
		void data()
		{
			cout<<"Enter Real Part : ";
			cin>>real;
			cout<<"Enter Imaginary Part : ";
			cin>>img;
		}
		
		complax sum(complax obj)
		{
			complax o1;
			o1.real=real+obj.real;
			o1.img=img+obj.img;
			
			return o1;
		}
		
		void display()
		{
			cout<<real<<" + "<<img<<"j"<<endl;
		}
};

int main()
{
	complax c1,c2,c3;
	
	cout<<"--------Input_First_Complax_Data----------"<<endl;
	c1.data();
	
	cout<<"--------Input_Second_Complax_Data----------"<<endl;
	c2.data();
	
	c3=c1.sum(c2);
	
	cout<<endl<<"First Complax Number is : ";c1.display();
	cout<<endl<<"Second Complax Number is : ";c2.display();
	cout<<endl<<"Total Addition of Two Complax Number is : ";c3.display();
	return 0;
}
