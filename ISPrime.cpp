#include<iostream>
using namespace std;
int main() {
    int n, number;
    bool isPrime;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 1) {
        cout << "There are no prime numbers less than or equal to " << n << "." << endl;
    } else {
        cout << "Prime numbers less than or equal to " << n << " are: ";
        bool First_print = true;
        for (number = 2; number <= n; number++) {
            isPrime = true;
            for (int i = 2; i <= number / 2; ++i) {
                if (number % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                if (!First_print)
                    cout << ", ";
                cout << number;
                First_print = false;
            }
        }
        cout << endl;
    }

    return 0;
}
