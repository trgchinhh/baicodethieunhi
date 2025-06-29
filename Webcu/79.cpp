#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); 
    map<char, int> freq;
    for (char c : s) {
        if (isalpha(c)) { 
            c = tolower(c); 
            freq[c]++;
        }
    }
    char maxChar = '\0';
    int maxFreq = 0;
    for (char c : s) {
        char lower_c = tolower(c);
        if (isalpha(lower_c) && freq[lower_c] > maxFreq) {
            maxChar = lower_c;
            maxFreq = freq[lower_c];
        }
    }
    cout << maxChar << ":" << maxFreq << endl;
    return 0;
}