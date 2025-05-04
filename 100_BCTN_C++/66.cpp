#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); 
    size_t first = s.find_first_not_of(' ');
    if (first != string::npos) {
        s = s.substr(first); 
    } else {
        s = ""; 
    }
    cout << s << endl; 
    return 0;
}