#include <bits/stdc++.h>
using namespace std;

void xoaKhoangTrangCuoi(string &s) {
    int i = s.length() - 1;
    while (i >= 0 && s[i] == ' ') {
        s.pop_back();  
        i--;
    }
}

int main() {
    string s;
    getline(cin, s);  
    xoaKhoangTrangCuoi(s);  
    cout << s << endl;  
    return 0;
}