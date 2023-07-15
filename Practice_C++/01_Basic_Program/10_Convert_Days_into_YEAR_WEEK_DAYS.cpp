/*  C++ Program to Convert Days into Years,Weeks and Days  */

#include<iostream>
using namespace std;

int main()
{
	int d,y,w;
	
	cout<<"Enter Number of Days : ";
	cin>>d;
	
	y=d/365;
	w=(d%365)/7;
	d=d-((y*365)+(w*7));
	
	cout <<endl<< y << " Year, " << w << " Weeks, and " << d << " Days\n";
    return 0;
	
}
