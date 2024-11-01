#include <iostream>
using namespace std;

class Multiply {
    int a, b, c;
    public:
    Multiply(int x, int y, int z) {   // Parameterized constructor
        a = x;
        b = y;
        c = z;
    }

    void getProduct() {
        int product = a * b * c;
        cout << "The product of " << a << ", " << b << ", and " << c << " is: " << product << endl;
    }
};

int main() {
    int x, y, z;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    Multiply mul(x, y, z);
    mul.getProduct();
}