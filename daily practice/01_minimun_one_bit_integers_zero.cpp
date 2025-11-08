#include <iostream>
using namespace std;

int minimumOneBitOperations(int n) {
    if (n == 0) return 0;
    int k = 31 - __builtin_clz(n); // highest set bit index
    int mask = (1 << (k + 1)) - 1;
    return mask - minimumOneBitOperations(n - (1 << k));
}

int main() {
    int n;
    cin >> n;  // read the input number
    cout << minimumOneBitOperations(n) << endl;
    return 0;
}
