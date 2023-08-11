/* C++ Program to find Power of a Number using Recursion */

#include <iostream>
using namespace std;

int calc(int, int);

int main()
{
    int base, power, result;

    cout << "\nEnter base value : ";
    cin >> base;

    cout << "\nEnter power of base : ";
    cin >> power;

    result = calc(base, power);

    cout <<"\nThe Power of a Number [ "<< base << "^" << power << " ] = " << result<<endl;

    return 0;
}

int calc(int base, int power)
{
    if (power != 0)
    {
    	return (base*calc(base, power-1));
	}
    else
    {
    	return 1;
	}
}
