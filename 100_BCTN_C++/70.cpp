#include <bits/stdc++.h>
using namespace std;

void doiKyTuDau(string &s) {
    bool batdaubangchu = true;  
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ' ') {
            batdaubangchu = true;  
        } else if (batdaubangchu) {
            s[i] = toupper(s[i]);  
            batdaubangchu = false;  
        }
    }
}

int main() {

    string s;getline(cin, s);  
    doiKyTuDau(s);  
    cout << s << endl;  

    return 0;
}