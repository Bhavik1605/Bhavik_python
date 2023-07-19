/*  C++ Program to Check Whether a character is Vowel or Consonant  */

#include <iostream>
using namespace std;

int main()
{
    char c;

    cout << "Enter any character to check : ";
    cin >> c;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
         cout<<"\nThe Entered Character [ "<<c<<" ] is a Vowel.\n";
    }
    else
    {
         cout<<"\nThe Entered Character [ "<<c<<" ] is a Consonant.\n";
    }


    return 0;
}
