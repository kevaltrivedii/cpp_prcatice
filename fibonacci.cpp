#include <iostream>
using namespace std;

int main() {
    int num, a = 0, b = 1, c = 0;

    cout << "Enter the number : ";
    cin >> num;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= num; ++i) {
        if(i == 1) {
            cout << a << ", ";
            continue;
        }
        if(i == 2) {
            cout << b << ", ";
            continue;
        }
        c = a + b;
        a = b;
        b = c;
        
        cout << c << ", ";
    }
    return 0;
}

