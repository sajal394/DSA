#include<iostream>
using namespace std;

int getnthterm(int n) {

    return (3 * n) + 7 ;
}

int main() {

    int n;

    cout<<"enter the value of n ";
    cin>> n;
    
    int nthTerm = getnthterm(n) ;

    cout<<" the nth term of the ap is: "<<nthTerm<<endl;

    return 0;


   
}