#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ___TruongChinh304___ signed main()
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

using ll = long long;
using namespace std;

const int C_MAX = 1e5, C_MIN = -1e5, c_INF = 1e9;

bool snt(int n){
    if(n < 2) return false;
    for(int i = 2; i * i<= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

void c_solve(void){
    int n; cin >> n;
    map<int, bool> ma;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        ma[x] = true;
    }
    int check = 0;
    for(auto x : ma){
        if(snt(x.first)){
            check =1;
            cout << x.first << endl;
        }
    }
    if(!check){
        cout << "-" << endl;
    }
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}