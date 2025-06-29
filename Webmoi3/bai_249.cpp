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
    vector<vector<int>> matrix;
    string line;

    while (getline(cin, line)) {
        if (line.empty()) break;
        stringstream ss(line);
        vector<int> row;
        int x;
        while (ss >> x) {
            row.push_back(x);
        }
        matrix.push_back(row);
    }

    int n = matrix.size();       
    int m = matrix[0].size();    
    for (int j = 0; j < m; ++j) {
        vector<int> col;
        for (int i = 0; i < n; ++i)
            col.push_back(matrix[i][j]);
        sort(col.begin(), col.end());  

        for (int i = 0; i < n; ++i)
            matrix[n - 1 - i][j] = col[i];
    }

    for (const auto& row : matrix) {
        for (int x : row) cout << x << " ";
        cout << "\n";
    }
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}