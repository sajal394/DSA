#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;

    // int ans = 0;
    // int i = 0;

    // while (n != 0)
    // {

    //     int bit = n & 1;

    //     ans = (bit * pow(10, i)) + ans;

    //     n = n >> 1;
    //     i++;
    // }
    // cout << "Answer is " << ans << endl;

    int n;
    cout<<"Enter a negative number ";
    cin>>n;

    //convert the negative number to positive

    n = n * -1;

    //print the binary of the positive number 

    cout<< "Binary of " << n << " is " ;
    while(n>0) {
        cout<<n%2;
        n=n/2;

    }
    return 0;


}