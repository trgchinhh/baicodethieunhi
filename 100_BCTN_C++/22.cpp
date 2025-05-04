#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    int cost = 0;
    if (n <= 50) {
        cost = n * 600; 
    } else if (n <= 100) {
        cost = 50 * 600 + (n - 50) * 800; 
    } else if (n <= 200) {
        cost = 50 * 600 + 50 * 800 + (n - 100) * 1100; 
    } else {
        cost = 50 * 600 + 50 * 800 + 100 * 1100 + (n - 200) * 1500; 
    }
    cout << cost << endl; 
    return 0;
}