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
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> vec;
    int n;
    while(ss >> n){
        vec.push_back(n);
    }
    int x; cin >> x;
    int cnt = 0;
    for(int z : vec){
        if(x == z){
            cnt++;
        }
    }
    cout << cnt << endl;
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}