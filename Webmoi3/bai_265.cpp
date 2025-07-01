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
    int n; cin >> n;
    cin.ignore();
    while(n --){
        string m; 
        getline(cin, m);
        if(m[0] == m[m.size()-1] && 
           m[1] == m[m.size()-2] &&
           m[2] == m[m.size()-3]){
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}