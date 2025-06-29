#include <bits/stdc++.h>
using namespace std;

int ucln(int n, int m){
    while(m != 0){
        int tam = m;
        m = n % m;
        n = tam;
    }
    return n;
}

int main() {
    
    int n, m; cin >> n >> m;
    int max = ucln(n, m);
    cout << (n / max) << "/" << (m / max) << endl;

    return 0;
}