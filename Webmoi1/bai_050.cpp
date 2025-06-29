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
    int kwh; cin >> kwh;

    int cost = 0;

    if (kwh <= 50) {
        cost = kwh * 600;
    } else if (kwh <= 100) {
        cost = 50 * 600 + (kwh - 50) * 800;
    } else if (kwh <= 200) {
        cost = 50 * 600 + 50 * 800 + (kwh - 100) * 1100;
    } else {
        cost = 50 * 600 + 50 * 800 + 100 * 1100 + (kwh - 200) * 1500;
    }

    cout << cost << endl;
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}