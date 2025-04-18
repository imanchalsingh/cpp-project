#include <iostream>
using namespace std;

int main()
{
    // Find Even numbers.
    int i, n;
    cout << "Enter the numbers: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        };
    }

    return 0;
}