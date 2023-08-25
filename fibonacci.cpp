#include <iostream>

using namespace std;

int fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main() {
  int n;

  cout << "Enter the nth Fibonacci number: ";
  cin >> n;

  fibonacci(n);

  cout << "The nth Fibonacci number is: " << n << endl;

  return 0;
}