/*  program to calculate area and circumference of circle using function */

#include<iostream>
using namespace std;

float area(float r);
float circum(float);

int main()
{
    float r;   
    
    cout<<"Enter Radius of Circle: ";
    cin>>r;
    
    cout<<endl<<"Area of Circle : "<<area(r)<<endl;
    
    cout<<endl<<"Circumference of Circle : "<<circum(r);
}
float area(float r)
{
    return (3.14 * r * r);
}
float circum(float r)
{
    return(2 * 3.14 * r);
}


