#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "1st: ";
    cin >> x;
    cout << "2nd: ";
    cin >> y;

    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }

    cout << "The GCD is " << x << endl;

    return 0;
}