#include <iostream>
using namespace std;

int main() {
    int num;
    int fact = 1;

    cout << "Enter a positive integer: ";
    cin >> num;
    
    if (num < 0)
        cout << "Factorial of a negative number doesn't exist." << endl;
    else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        cout << "Factorial of " << num << " = " << fact << endl;
    }
}