// program to print the sum of all odd and even numbers between 1 and n
#include <iostream>
using namespace std;

int main() {
  int n, sum_odd = 0, sum_even = 0;
  cout << "Enter the value of n: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      sum_even += i;
      continue;
    }
    sum_odd += i;
  }

  cout << "The sum of all odd numbers between 1 and n is " << sum_odd << endl;
  cout << "The sum of all even numbers between 1 and n is " << sum_even << endl;

  return 0;
}
