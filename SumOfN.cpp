#include<iostream>
using namespace std;
int main() {

//SUM OF NUMBERS UPTO N


int n;
cout<<" Enter any Number\n ";
cin>>n;

int i=1;
int sum=0;
while(i<=n) {
    sum = sum+i;
    i = i+1;

}

cout<<"value of sum is \n"<<sum<<endl;


//SUM OF ALL EVEN NUMBERS 

int n;
cout<<"Enter any number ";
cin>>n;

int i = 2;
int sum = 0;
while(i<=n) {
    sum = sum + i;
    i = i + 2;
}

cout<<"sum of even numbers is "<<sum<<endl;

}