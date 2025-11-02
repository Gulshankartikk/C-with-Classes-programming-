#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[3];
    cout << "Enter elements (0, 1, or 2): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count_zero = 0, count_one = 0, count_two = 0;

    // Count 0s, 1s, and 2s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            count_zero++;
        else if (arr[i] == 1)
            count_one++;
        else
            count_two++;
    }

    // Fill 0s
    for (int i = 0; i < count_zero; i++)
        arr[i] = 0;

    // Fill 1s
    for (int i = count_zero; i < count_zero + count_one; i++)
        arr[i] = 1;

    // Fill 2s
    for (int i = count_zero + count_one; i < n; i++)
        arr[i] = 2;

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
