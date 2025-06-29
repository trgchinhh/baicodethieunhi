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
    int sum = 0;
    int check = 0;
    while(n > 0){
        if(n % 2 == 0){ 
            sum += n % 10;
            check = 1;
        }    
        n /= 10;
    }
    if(!check){
        cout << "-" << endl;
        return;
    }
    cout << sum << endl;
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}