#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a negative number: ";
    cin >> n;

    // Convert the negative number to positive
    n = n * -1;

    // Print the binary of the positive number
    cout << "Binary of " << n << " is: ";
    while (n > 0)
    {
        cout << n % 2;
        n = n / 2;
    }

    return 0;
}