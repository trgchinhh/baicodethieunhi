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
    int m, n, k; cin >> m >> n >> k;
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    vector<int> insert_col(m);
    for (int i = 0; i < m; i++)
        cin >> insert_col[i];
    for (int i = 0; i < m; i++)
        a[i].insert(a[i].begin() + k, insert_col[i]);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < a[i].size(); j++) {
            cout << a[i][j];
            if (j != a[i].size() - 1) cout << " ";
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