//C++ Program to Check Armstrong Number

//armstrong number is a number whose sum of cube of its digit is equal to the number
// Eg: 371   -> (3*3*3)+(7*7*7)=(1*1*1)=371

#include <iostream>
using namespace std;
int main()
{
  int origNum, num, rem, sum = 0;
  cout << "Enter a positive  integer: ";
  cin >> origNum;
  num = origNum;
  while(num != 0)
  {
      rem = num % 10;
      sum += rem * rem * rem;
      num /= 10;
  }
  if(sum == origNum)
    cout << origNum << " is an Armstrong number.";
  else
    cout << origNum << " is not an Armstrong number.";
  return 0;
}
//Output

Enter a positive integer: 371
371 is an Armstrong number.
