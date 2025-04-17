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
    int fact = 1, numN, count;

    cout << "\nEnter a number: ";
    cin >> numN;

    if (numN < 0)
    {
        cout << "Factorial of a negative number is not defined." << endl;
    }
    else
    {
        for (count = 1; count <= numN; count++)
        {
            fact = fact * count;
        }
        cout << "Factorial of " << numN << " is: " << fact << endl;
    }
    // 4. Given a person's age, find if they should get a driving license or not.
    int age;
    cout << "\nEnter your age: ";
    cin >> age;
    if (age>18)
    {
        cout << "They should get a driving license.";
    }
    else {
        cout << "No, they should not get a license.";
    }
    return 0;
}
