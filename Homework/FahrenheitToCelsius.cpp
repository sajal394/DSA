#include<iostream>
using namespace std;

int main() {

float fahren,celsius;

cout<<"Enter the Temperature in Fahrenhiet\n";
cin>>fahren;

celsius = 5 * (fahren - 32) / 9;
cout<<fahren<<" Fahrenheit is equal to "
<<celsius<<"Centigrade";

}

