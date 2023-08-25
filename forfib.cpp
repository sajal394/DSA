// Fibonacci series


#include <iostream>
using namespace std;

int main(){

    int n = 10;

    int a = 0;
    int b = 1;

    cout<<a<<" " <<b<<" ";

    for(int i = 1;i<=10; i++) {

        int nextNumber = a+b;
        cout<<nextNumber<< " "<< endl;

        a = b;
        b = nextNumber;
    }


}