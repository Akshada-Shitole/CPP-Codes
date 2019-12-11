//C++ Program to Copy Strings
#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cout << "Enter string s1: ";
    getline (cin, s1);
    s2 = s1;
    cout << "s1 = "<< s1 << endl;
    cout << "s2 = "<< s2;
    return 0;
}
//Output

Enter string s1: C++ Strings
s1 = C++ Strings
s2 = C++ Strings
