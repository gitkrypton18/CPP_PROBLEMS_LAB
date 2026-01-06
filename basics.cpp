/*EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C
PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES*/
#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int max;

  if (a > b) {
    if (a > c) {
      max = a;
    }

  }

  else if (b > c) {
    if (b > a) {
      max = b;
    }

  } else if (c > a) {
    if (c > b)
      max = c;
  }

  cout << max;
}
