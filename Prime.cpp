#include<iostream>
using namespace std;

int main() {

    //CHECK WHETHER THE ENTERED NUMBER IN PRIME OR NOT ?

int n;
cout<<"Enter Your Number";
cin>>n;

int i=2;

while(i<n) {
    //divide hogaya-> not prime
    if(n%i==0) {
        cout<<" Not Prime for "<< i <<endl;
    }
    else {
        cout<<" Prime for "<<i<<endl;
    }
    i=i+1;
}




}