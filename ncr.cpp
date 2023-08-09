#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int ncr(int n, int r) {
    int upper = factorial(n);
    int lower = factorial(r) * factorial(n - r);
    return upper / lower;
}

int main() {
    int n, r;
    cin >> n >> r;  // Remove `endl` from here
    cout << "ans " << ncr(n, r) << endl;
    return 0;
}