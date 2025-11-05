#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int count1 = 0, count2 = 0;
    bool flag = 0;

    // Case 1: pattern starts with 0 (0 1 0 1 ...)
    for(int i = 0; i < s.size(); i++) {
        if(flag != (s[i] - '0'))
            count1++;
        flag = !flag;
    }

    // Case 2: pattern starts with 1 (1 0 1 0 ...)
    flag = 1;
    for(int i = 0; i < s.size(); i++) {
        if(flag != (s[i] - '0'))
            count2++;
        flag = !flag;
    }

    cout << "Minimum flips needed: " << min(count1, count2) << endl;

    return 0;
}
