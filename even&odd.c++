#include <iostream>
using namespace std;

bool isEven(int num)
{
    return num % 2 == 0;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << number << " is " << (isEven(number) ? "even" : "odd") << endl;

    return 0;
}