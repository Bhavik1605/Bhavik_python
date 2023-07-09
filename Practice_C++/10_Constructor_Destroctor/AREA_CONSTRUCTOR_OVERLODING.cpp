//calculate the area of triangle, rectangle and circle using constructor overloading

#include<iostream>
using namespace std;

class Area{
	private:
		float area;
	public:
		Area(float r)
		{
			area=3.14*r*r;
		}
		Area(float l,float b)
		{
			area=l*b;
		}
		Area(float h,float ba,float c)
		{
			area=c*h*ba;
		}
		
		float display()
		{
			return area;
		}
};

int main()
{
	int ch;
	float r,l,b,h,ba;
	char choice;
	
	do
	{
		cout<<endl<<"--------------Menu----------------"<<endl;
		cout<<"[1]. Area of Circle"<<endl;
		cout<<"[2]. Area of Rectangle"<<endl;
		cout<<"[3]. Area of Triangle"<<endl;
		
		cout<<endl<<"Enter Your Choice : ";
		cin>>ch;
		
		if(ch==1)
		{
			cout<<endl<<"-----------Area_of_Circle--------------"<<endl;
			cout<<endl<<"Enter Radius of Circle : ";
			cin>>r;
				
			Area r1(r);
			
			cout<<endl<<"Total Area of Circle is : "<<r1.display()<<endl;
		}
					
		else if(ch==2)
		{
			cout<<endl<<"-----------Area_of_Rectangel--------------"<<endl;
			cout<<endl<<"Enter Length of Rectangle : ";
			cin>>l;
			cout<<"Enter Breadth of Rectangle : ";
			cin>>b;
					
			Area r2(l,b);
			
			cout<<endl<<"Total Area of Rectangle is : "<<r2.display()<<endl;
		}
					
		else if(ch==3)
		{
			cout<<endl<<"-----------Area_of_Triangle--------------"<<endl;
			cout<<endl<<"Enter Hight of Triangle : ";
			cin>>h;
			cout<<"Enter Base of Triangle : ";
			cin>>ba;
				
			Area r3(h,ba,0.5);
			
			cout<<endl<<"Total Area of Triangle is : "<<r3.display()<<endl;
		}
				
		else
		{
			cout<<endl<<"Invalid Input!!!"<<endl;
		}
		
		cout<<endl<<"---------------------------------------------------"<<endl;
		cout<<"Do You Want to Continue..[Press 'y'/'n'] : ";
		cin>>choice;
		
	}while(choice=='y' || choice=='Y');
	
	if(choice=='n' || choice=='N')
	{
		cout<<endl<<"-----------------------------"<<endl;
		cout<<"Thank You Very Much..."<<endl;
	}
	return 0;
}
