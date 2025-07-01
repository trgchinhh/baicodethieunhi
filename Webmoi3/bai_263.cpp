#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ___TruongChinh304___ signed main()
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

using ll = long long;
using namespace std;

const int C_MAX = 1e5, C_MIN = -1e5, c_INF = 1e9;

ll gt(int n){
    if(n < 0) return 0;
    ll tich = 1;
    for(int i = 1; i <= n; i++){
        tich *= i;
    }
    return tich;
}

void c_solve(void){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(gt(a[i])){
            cout << gt(a[i]) << " ";
        } else cout << "Khong xac dinh giai thua cho so am" << endl;
    }
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}