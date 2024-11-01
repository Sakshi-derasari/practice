#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, term = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: " << t1 << ", " << t2;

    for (int i = 1; i <= n - 2; i++) {
        term = t1 + t2;
        cout << ", " << term;
        t1 = t2;
        t2 = term;
    }
    cout << endl;
}