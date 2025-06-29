#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; getline(cin, s);
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    if (s == reversed_s) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}