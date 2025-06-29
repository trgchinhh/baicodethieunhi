#include <bits/stdc++.h>
using namespace std;

int main() {
    int x; cin >> x;
    int tong = 0;
    while (x > 0) {
        tong += x % 10;  
        x /= 10;  
    }

    int soNut = tong % 10;
    cout << soNut << endl;
    if (soNut == 9) {
        cout << "may man" << endl;
    } else {
        cout << "chua may man" << endl;
    }

    return 0;
}