#include<iostream>
#include<cstring>
using namespace std;

class player
{
	public:
		int age;
		string name,team;
		
	public:
		player()
		{
			fflush(stdin);
			cout<<"Enter player name : ";
			getline(cin,name);
			cout<<"Enter Team name : ";
			getline(cin,team);
			cout<<"Enter age of player : ";
			cin>>age;
		}
		
		void display()
		{
			cout<<"------Player_Info.---------"<<endl;
			cout<<"Player name is : "<<name<<endl;
			cout<<"Player team name is: "<<team<<endl;
			cout<<"Player age is : "<<age<<endl;
		}
		
		void change(string n,string t,int a)
		{
			name = n;
			team = t;
			age = a;
		}
};

int main()
{
	char ch;
	
	player p;
	p.display();
	
	cout<<endl<<"Do you want to change player data ['y/n'] : ";
	cin>>ch;
	
	if(ch == 'y')
	{
		
		string n,t;
		int a;
		
		fflush(stdin);
		cout<<"Enter player name : ";
		getline(cin,n);
		cout<<"Enter Team name : ";
		getline(cin,t);
		cout<<"Enter age of player : ";
		cin>>a;
	
		p.change(n,t,a);
		p.display();
	}
	else if(ch == 'n')
	{
		cout<<"Thank you very much";
	}
	else
	{
		cout<<"Your input is incorrect!!!";
	}
	
	return 0;
}
