//program to find cricketer avarage run using single inheritance

#include<iostream>
using namespace std;

class cricketer{
	public:
		int run,in,no;
		void input()
		{	
			cout<<"Enter Batsman Runs : ";
			cin>>run;
			cout<<"Enter Batsman innings : ";
			cin>>in;
			cout<<"Enter best performance (i.e.how many time notout) : ";
			cin>>no;
		}
};
class batsman:public cricketer{
	public:
	
		int avg()
		{
			return run/(in-no);
		}
		
		void display()
		{
			cout<<"\n--------Batsman_Info---------\n";
			cout<<"Total Batsman Runs are: "<<run<<endl;
			cout<<"Total Batsman innings are : "<<in<<endl;
			cout<<"Total Avarage run of Batsman is : "<<avg()<<endl;
		}
};

int main()
{
	batsman b;
	b.input();
	b.display();
	
	return 0;
}
