/* Program to find the square root of a number */

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
  float n,ans;
  
  cout <<"Enter number to find its squareroot : ";
  cin >> n;
  
  ans = pow(n, 0.5);
  
  cout<<"Squreroor of ["<<n<<"] is : " <<ans<<endl;
  
  return 0;
}
