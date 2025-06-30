#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ___TruongChinh304___ signed main()
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

using ll = long long;
using namespace std;

const int C_MAX = 1e5, C_MIN = -1e5, c_INF = 1e9;

int tongMotChuSo(int x) {
    while (x >= 10) {
        int s = 0;
        while (x > 0) {
            s += x % 10;
            x /= 10;
        }
        x = s;
    }
    return x;
}

void c_solve(void){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        cout << tongMotChuSo(x) << " ";
    }
    cout << endl;
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}