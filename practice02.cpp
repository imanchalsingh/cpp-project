#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main()
{
    // Calculate nCr binomial coefficient.
    // n!/(r! * (n - r)!)
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    if (r > n || n < 0 || r < 0) {
        cout << "Invalid input. n and r must be non-negative and r <= n." << endl;
    } else {
        int nCr = factorial(n) / (factorial(r) * factorial(n - r));
        cout << "nCr = " << nCr << endl;
    }

    return 0;
}