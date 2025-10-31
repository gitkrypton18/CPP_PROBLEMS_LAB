#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int max1 = a[0], max2 = -1e9;   // initialize max and second max

    for(int i = 1; i < n; i++) {
        if(a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2 && a[i] < max1) {
            max2 = a[i];
        }
    }

    cout << "\nMaximum: " << max1;
    cout << "\nSecond Maximum: " << max2;

    return 0;
}
