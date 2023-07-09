//Find perimeter and Area of two rectangle and check area is same or not 

#include<iostream>
using namespace std;

class rectangle{
	private:
		float length,bridth;
	
	public:
		void setdata()
		{
			cout<<"Enter Length for Rectangle : ";
			cin>>length;
			cout<<"Enter Breadth for Rectangle : ";
			cin>>bridth;
		}
		
		float perimeter()
		{
			return (2*length + 2*bridth);
		}
		
		float area()
		{
			return length*bridth;
		}
		
		int samearea(rectangle obj)
		{
			float area1=length*bridth;
			float area2=obj.length*obj.bridth;
			
			if(area1==area2)
			{
				return 1;
			}
			return 0;
		}
};

int main()
{
	rectangle r1,r2;
	
	cout<<"--------Input_for_First_Rectangle---------\n";
	r1.setdata();
	
	cout<<"--------Input_for_Second_Rectangle---------\n";
	r2.setdata();
	
	cout<<endl<<"First Rectangle Area is : "<<r1.area()<<" and Perimeter is : "<<r1.perimeter()<<endl;
	cout<<endl<<"Second Rectangle Area is : "<<r2.area()<<" and Perimeter is : "<<r2.perimeter();
	
	if(r1.samearea(r2))
	{
		cout<<endl<<"\nRectangles have the Same Area";
	}
	else
	{
		cout<<endl<<"\nRectangles do not have the Same Area";
	}
	
	return 0;
}
