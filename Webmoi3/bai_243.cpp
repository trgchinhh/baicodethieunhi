#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ___TruongChinh304___ signed main()
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

using ll = long long;
using namespace std;

const int C_MAX = 1e5, C_MIN = -1e5, c_INF = 1e9;

bool scp(int n){
    if(n < 0) return false;
    for(int i = 0; i <= n; i++){
        if(i * i == n) return true;
    }
    return false;
}

void c_solve(void){
    int n, m; cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    int y; cin >> y;
    int min_square = C_MAX;
    bool found = false;

    for (int i = 0; i < n; ++i) {
        if (scp(a[i][y])) {
            min_square = min(min_square, a[i][y]);
            found = true;
        }
    }

    if (found) cout << min_square << "\n";
    else cout << -1 << "\n";
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}