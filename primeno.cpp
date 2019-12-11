//C++ Program to Display Prime Numbers Between Two Intervals

#include <iostream>
using namespace std;
int main()
{
    int low, high, i, flag;
    cout << "Enter two numbers(intervals): ";
    cin >> low >> high;
    cout << "Prime numbers between " << low << " and " << high << " are: ";
    while (low < high)
    {
        flag = 0;
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << low << " ";
        ++low;
    }
    return 0;
}
//output:


Enter two numbers(intervals): 20 50 Prime numbers between 20 and 50 are: 23 29 31 37 41 43 47
