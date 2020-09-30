//C++ Program to Find ASCII Value of a Character

// ASCII values..
//(A-Z) -> (65 - 90)
//(a - z) -> (97 - 122)

#include <iostream>
using namespace std;
int main()
{
 char c;
 cout << "Enter a character: ";
 cin >> c;
 cout << "ASCII Value of " << c << " is " << int(c);
 return 0;
}
//Output


Enter a character: p
ASCII Value of p is 112
