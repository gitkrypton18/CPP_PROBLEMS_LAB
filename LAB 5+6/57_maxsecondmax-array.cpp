// program to read an array and find max and second max
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int max1 = a[0], max2 = a[0];

  for (int i = 1; i < n; i++) {
    if (a[i] > max1) {
      max2 = max1;
      max1 = a[i];
    } else if (a[i] > max2 && a[i] < max1)
      max2 = a[i];
  }

  if (max1 == max2)
    cout << "\nAll elements are equal. No second maximum.";
  else
    cout << "\nMaximum: " << max1 << "\nSecond Maximum: " << max2;
  return 0;
}
