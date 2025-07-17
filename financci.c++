#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;
    
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Fibonacci Series up to " << n << ": ";
    
    
    cout << first << " " << second << " ";
    

    next = first + second;
    while (next <= n) {
        cout << next << " ";
        first = second;
        second = next;
        next = first + second;
    }
    
    return 0;
}