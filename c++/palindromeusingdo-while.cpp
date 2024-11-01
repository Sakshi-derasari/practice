#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, rem, origin_Num;

    cout << "Enter an integer:";
    cin >> num;

    origin_Num = num;

    // Reverse the given number
    do {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    } 
    while (num != 0);

    if (origin_Num == rev)
        cout << origin_Num << " is a palindrome." << endl;
    else
        cout << origin_Num << " is not a palindrome." << endl;
}