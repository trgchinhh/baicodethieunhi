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
    int m, n; cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int min_sum = C_MAX;
    int min_index = 0;
    for (int j = 0; j < n; j++) {
        int col_sum = 0;
        for (int i = 0; i < m; i++) {
            col_sum += a[i][j];
        }
        if (col_sum < min_sum) {
            min_sum = col_sum;
            min_index = j;
        }
    }
    cout << min_index << endl;
    cout << min_sum << endl;
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}