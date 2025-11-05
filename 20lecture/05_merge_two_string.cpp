#include <iostream>
#include <string>
using namespace std;

int main() {
    string S1, S2;
    cout << "Enter first string: ";
    cin >> S1;
    cout << "Enter second string: ";
    cin >> S2;

    int i = 0, j = 0;
    string s3 = "";

    while (i < S1.size() && j < S2.size()) {
        s3 += S1[i];
        s3 += S2[j];
        i++;
        j++;
    }

    // Add remaining characters if lengths differ
    while (i < S1.size()) s3 += S1[i++];
    while (j < S2.size()) s3 += S2[j++];

    cout << "Merged string: " << s3 << endl;

    return 0;
}
