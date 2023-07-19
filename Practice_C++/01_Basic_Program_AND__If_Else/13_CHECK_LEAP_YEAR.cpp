/*  C++ Program to Check whether a year is Leap year or not  */

#include<iostream>
using namespace std;

int main()
{
    int y;

    cout<<"Enter any Year (XXXX) :: ";
    cin>>y;

    if(y%100==0)
    {
        if(y%400==0)
        {
           cout<<endl<<"The Entered Year [ "<<y<<" ] is a Leap Year"<<endl;
        }

    }
    else
    {
        if(y%4==0)
        {
            cout<<endl<<"\nThe Entered Year [ "<<y<<" ] is a Leap Year"<<endl;
        }
        else
        {
            cout<<endl<<"\nThe Entered Year [ "<<y<<" ] is NOT a Leap Year"<<endl;
        }

    }

   return 0;
}

