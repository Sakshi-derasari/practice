#include <iostream>
using namespace std;

class Fibonacci {
    int n; // Number of terms in the series
    public:
    Fibonacci(int num) {  // Parameterized constructor
        n = num;
    }

    void printfs() {   // Function to print Fibonacci series
        int t1 = 0, t2 = 1, term;

        cout << "Fibonacci Series: ";
        for (int i = 0; i < n; i++) {
            if (i <= 1)
                term = i;
            else {
                term = t1 + t2;
                t1 = t2;
                t2 = term;
            }
            cout << term << " ";
        }
        cout << endl;
    }
};

int main() {
    int num;

    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> num;

    Fibonacci fib(num);  // Creating object of Fibonacci class and passing the number as an argument
    fib.printfs();
}