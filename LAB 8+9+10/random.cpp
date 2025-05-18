#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {7, 89, 78};
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        cout << endl;
    }
    cout << sizeof(arr);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}