//Find Batting Avarage of Batsman using class and object

#include<iostream>
using namespace std;

class batsman{
	private:
		int bcode,inn,out,run;
		string name;
		float batavg;
		
	public:
		void input()
		{
			cout<<"Enter Batsman Name : ";
			getline(cin,name);
			cout<<"Enter Batsman Code : ";
			cin>>bcode;
			cout<<"Enter Total Innings of Batsman: ";
			cin>>inn;
			cout<<"Enter Number of Times NotOut : ";
			cin>>out;
			cout<<"Enter Total Run of Batsman : ";
			cin>>run;
		}
		
		void calavg()
		{
			batavg = run/(inn-out);
		}
		
		void display()
		{
			cout<<"\n--------Batsman_INFO----------\n";
			cout<<"Batsman Name is : "<<name<<endl;
			cout<<"Batsman Code is : "<<bcode<<endl;
			cout<<"Total Innings are : "<<inn<<endl;
			cout<<"Total Runs are : "<<run<<endl;
			cout<<"Total Number of Times NotOut is : "<<out<<endl;
			cout<<"Total Batting Avarage of Batsman is : "<<batavg;
		}
};
int main()
{
	batsman b;
	b.input();
	b.calavg();
	b.display();
	return 0;
}
