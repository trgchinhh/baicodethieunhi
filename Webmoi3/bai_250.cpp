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

    vector<int> result;

    for (int i = 0; i < matrix.size(); ++i) {
        bool allNegative = true;
        for (int num : matrix[i]) {
            if (num >= 0) {
                allNegative = false;
                break;
            }
        }
        if (allNegative) result.push_back(i);
    }

    if (result.empty()) {
        cout << -1 << "\n";
    } else {
        for (int idx : result) cout << idx << " ";
        cout << "\n";
    }
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}