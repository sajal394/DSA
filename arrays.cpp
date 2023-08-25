// WHAT IS ARRAY ?
// array is a bag which can contain only one type of elements.
// contigenious locations.
// can be accessed using index.

// WHY ARRAY ?
// to store many values in a single variable.

// IMPLEMENTATION OF ARRAYS.

#include <iostream>
using namespace std;

// HOLD
void printarray(int arr[], int size)
{

    cout << " printing the array " << endl;
    // print the array

    for (int i = 0; i <= size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << " Printing done " << endl;
}

int main()
{

    // declare

    int number[15];

    // accessing an array

    cout << " value at 14 index " << number[14] << endl;

    // initialising an array.

    int second[3] = {5, 7, 11};

    // accessing an element

    cout << " value at 2nd index " << second[2] << endl;

    int third[15] = {2, 7};

    int n = 15;
    printarray(third, 15);

    int thirdSize = sizeof(third) / sizeof(int);
    cout << " size of third is : " << thirdSize << endl;

    // initialising all locations with 0

    int fourth[10] = {0};
    n = 10;
    printarray(fourth, 10);

    // initialising all locations with 1 [not possible with below line]

    int fifth[10] = {1};
    n = 10;
    printarray(fifth, 10);

    int fifthSize = sizeof(fifth) / sizeof(int);
    cout << " size of fifth is : " << fifthSize << endl;

    cout << endl
         << " everything is fine " << endl
         << endl;

    return 0;
}