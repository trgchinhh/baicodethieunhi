#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ___TruongChinh304___ signed main()
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

using ll = long long;
using namespace std;

const int C_MAX = 1e5, C_MIN = -1e5, c_INF = 1e9;

void c_solve(void){
    int km;cin >> km;

    int total = 0;
    if (km <= 0) {
        total = 0;
    } else if (km == 1) {
        total = 12000;
    } else if (km <= 30) {
        total = 12000 + (km - 1) * 10000;
    } else {
        total = 12000 + 29 * 10000 + (km - 30) * 9000;
    }

    cout << total << endl;
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}