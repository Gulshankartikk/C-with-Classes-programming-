#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a binary string: ";
    cin >> s;

    int n = s.length();
    if (n < 2) {
        cout << 0;
        return 0;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1')
            count++;
    }

    int result = (count * (count - 1)) / 2;
    cout << "Number of substrings starting and ending with '1': " << result;

    return 0;
}
