#include <iostream>
using namespace std;
int main()
{
    // 1. Calculate "Simple Intrest" from Principal(P), Rate(R) and Time(T).

    float P, R, T, SI;

    // Input values
    cout << "Enter Principal (P): ";
    cin >> P;
    cout << "Enter rate of Interest (R): ";
    cin >> R;
    cout << "Enter Time (T in years): ";
    cin >> T;

    // Calculate Simple Interest
    SI = (P * R * T) / 100;

    // Output the result
    cout << "Simple Interest = " << SI << endl;
    // 2. Calculate Max of 2 numbers.

    int a, b, max;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    if (a > b)
    {
        cout << a;
    }
    else
    {
        cout << b;
    }
    // 3. Calculate Factorial of a number N.
    int fact, numN, count;
    cout << "\nEnter a number: ";
    cin >> numN;
    fact = 1;
    for (count = 1; count <= numN; count++)
    {
        fact = fact * count;
    }

    return 0;
}

// 4. Given a person's age, find if they should get a driving license or not.
