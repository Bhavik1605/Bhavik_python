/* Display the sum of the series 1 +11 + 111 + 1111 + .. n terms */

#include <iostream>
using namespace std;

int main()
{
    int n,sum = 0,x = 1;
    
    cout<<"Input Number of Terms : ";
    cin>>n;
    
    cout<<endl;
    
    for (int i = 1; i <= n; i++) 
    {
        cout<<x<< " ";
        
        if (i<n)
        {
            cout<<"+ ";
        }
        
        sum += x;
        
        x = (x * 10) + 1;
    }
    cout<<endl;
    
    cout<<endl<<"The sum of the series is: " << sum << endl;
}
