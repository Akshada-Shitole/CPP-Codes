//C++ Program to Sort Elements in Lexicographical Order (Dictionary Order)



#include <iostream>
using namespace std;
int main()
{
    string str[10], temp;
    cout << "Enter 10 words: " << endl;
    for(int i = 0; i < 10; ++i)
    {
      getline(cin, str[i]);
    }
    for(int i = 0; i < 9; ++i)
       for( int j = i+1; j < 10; ++j)
       {
          if(str[i] > str[j])
          {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
          }
    }
    cout << "In lexicographical order: " << endl;
    for(int i = 0; i < 10; ++i)
    {
       cout << str[i] << endl;
    }
    return 0;
}
//Output

Enter 10 words:
C
C++
Java
Python
Perl
R
Matlab
Ruby
JavaScript
PHP
In lexicographical order:
C
C++
Java
JavaScript
Matlab
PHP
Perl
Python
R
Ruby