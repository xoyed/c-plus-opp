#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0, remainder;

    cout << "Enter a number: ";
    cin >> number;

    while (number != 0)
    {
        digit = number % 10;
        sum += remainder;
        number = number / 10;
    }

    cout << "Sum of digits is " << sum << endl;

    return 0;
}