#include<iostream>
using namespace std;

class Time{
	private:
		int h,m;
		
	public:
		void data()
		{
			cout<<"Enter Hour : ";
			cin>>h;
			cout<<"Enter Minute : ";
			cin>>m;
		}
		
		Time sum(Time obj)
		{
			Time o1;
			o1.m=m+obj.m;
			o1.h=o1.m/60;
			o1.m=o1.m%60;
			o1.h+=h+obj.h;
			
			return o1;
		}
		
		void display()
		{
			cout<<h<<" Hours and "<<m<<" Minutes"<<endl;
		}
};

int main()
{
	Time t1,t2,t3;
	
	cout<<"-----Set_First_Time-------"<<endl;
	t1.data();
	
	cout<<endl<<"-----Set_Second_Time-------"<<endl;
	t2.data();
	
	t3=t1.sum(t2);
	
	cout<<endl<<"First Time is : ";t1.display();
	cout<<endl<<"Second Time is : ";t2.display();
	
	cout<<endl<<"Total Sum of Time is : ";t3.display();
	
	return 0;
}
