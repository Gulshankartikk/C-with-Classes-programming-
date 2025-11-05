#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int start = 0, end = s.size() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (s[start] != s[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "It is a palindrome!" << endl;
    else
        cout << "It is NOT a palindrome." << endl;

    return 0;
}

/* string k = s;
        reverse(k.begin(), k.end());
        
        if (k == s)
            return true;
        else
            return false;*/
