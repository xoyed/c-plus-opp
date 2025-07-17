 

#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << " 1st: ";
    cin >>x;
    cout << "2nd: ";
    cin >> y;
    cout << "3th: ";
    cin >> z;

    int largest = x;
    if (y > largest)
        largest = y;
    if (z > largest)
        largest = z;

    cout << "The largest number is " << largest << endl;
    return 0;
}