#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the Value of n" << endl;
    cin >> n;

    bool isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        // not a prime number
        if (n % i == 0)
        {
            //cout << "not a prime number " << endl;
            isPrime = 0;

            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "not a prime number" << endl;
    }
    else
    {
        cout << "is a prime number" << endl;
    }
}