#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int soTo5000 = n / 5000;
    n %= 5000;  
    int soTo2000 = n / 2000;
    n %= 2000; 
    int soTo1000 = n / 1000;
    cout << soTo5000 << " " << soTo2000 << " " << soTo1000 << endl;

    return 0;
}