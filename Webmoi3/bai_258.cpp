#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ___TruongChinh304___ signed main()
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

using ll = long long;
using namespace std;

const int C_MAX = 1e5, C_MIN = -1e5, c_INF = 1e9;

bool spp(int n){
    int sum = 0;
    if(n < 1) return false;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum > n) return true;
    else return false;
}

void c_solve(void){
    int n; cin >> n;
    int a[n];
    int check = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(spp(a[i])){
            check = 1;
            cout << a[i] << " ";
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