#include<iostream>
using namespace std;
int main() {

    char ch;
    cout <<"Enter any Character";
    cin>>ch;

    if(ch>=65&&ch<=90) {
        cout<<"You entered an upper case letter";
    }
    else if(ch>=97&&ch<=122) {
        cout<<"You entered a lower case letter";
    }
    else if(ch>=48&&ch<=57) {
        cout<<"You entered a digit";
    }
    else {
        cout<<"You entered a special character";
    }



}
