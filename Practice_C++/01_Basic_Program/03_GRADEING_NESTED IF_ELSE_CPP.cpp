//Grading system of student marks using nested if else..

#include<iostream>
using namespace std;

int main()
{
	int mark[5];
	float pr;
	
	cout<<"Enter 1st Subject mark : ";
	cin>>mark[1];
	cout<<"Enter 2nd Subject mark : ";
	cin>>mark[2];
	cout<<"Enter 3rd Subject mark : ";
	cin>>mark[3];
	cout<<"Enter 4th Subject mark : ";
	cin>>mark[4];
	cout<<"Enter 5th Subject mark : ";
	cin>>mark[5];
	
	pr = (mark[1]+mark[2]+mark[3]+mark[4]+mark[5])/5;

	if(pr<0 || pr>100)
	{
		cout<<"\nYour mark is incorrect.";
	}
	else if(pr<=100 && pr>=80)
	{
		cout<<"\nCongrats!! Your Grade is A.";
	}
	else if(pr<=80 && pr>=60)
	{
		cout<<"\nYour Grade is B.";
	}
	else if(pr<=60 && pr>=40)
	{
		cout<<"\nYour Grade is c.";
	}
	else if(pr<=40 && pr>=30)
	{
		cout<<"\nYour Grade is D.";
	}
	else
	{
		cout<<"\nSorry!!!You are fail BetterLuck Next Time.";
	}
	return 0;
}
