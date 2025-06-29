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
    int m, y; cin >> m >> y;
    bool nhuan = (y % 400 == 0) || (y % 100 != 0 && y % 4 == 0);
    if(m == 2){
        cout << (nhuan ? 29 : 28) << endl;
    } else if(m == 4 || m == 6 || m == 9 || m == 11){
        cout << 30 << endl;
    } else cout << 31 << endl;
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}