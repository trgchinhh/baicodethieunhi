#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); 
    for (char &c : s) {
        c = tolower(c);
    }

    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

   
    set<char> printed; 
    for (char c : s) {
        if (printed.find(c) == printed.end()) {
            cout << c << ":" << freq[c] << " ";
            printed.insert(c);
        }
    }

    return 0;
}