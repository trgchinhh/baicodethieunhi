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
    vector<int> flat;
    int a[m][n];
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x;
            flat.push_back(x);
        }

    sort(flat.begin(), flat.end(), greater<int>());

    int idx = 0;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            a[i][j] = flat[idx++];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j];
            if (j != n - 1) cout << " ";
        }
        cout << "\n";
    }
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}