/*  C++ Program to find Cube of a Number using function */

#include<iostream>
using namespace std;

//function prototype
float cube(float);

int main()
{	
    float a,cu;
    
    cout<<"Enter any number : ";
    cin>>a;
	
	//function calling
    cu=cube(a);
	
    cout<<endl<<"The Cube of Number [ "<<a<<" ] is : "<<cu<<endl;

    return 0;
}

float cube(float a)
{
    float cu;
    
    cu=a*a*a;
    return(cu);
}

