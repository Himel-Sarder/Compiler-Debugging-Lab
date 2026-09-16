#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cout << "Enter a production rule: ";
    cin >> s;

    char left = s[0];

    // Check first RHS symbol
    if (s[3] == left) {
        cout << "Left Recursion found at index 3";
        return 0;
    }

    // Check after |
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == left && s[i - 1] == '|') {
            cout << "Left Recursion found at index " << i;
            return 0;
        }
    }

    cout << "Left Recursion not found :)";

    return 0;
}
