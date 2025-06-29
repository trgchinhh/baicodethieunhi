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
    int k; cin >> k;
    float sum = 0, cnt = 0, cntf = 0;
    for(int i = 1; i < C_MAX; i++){
        if(i % 3 != 0){
            sum += i;
            cnt++;
            cntf++;
            if(cntf == k){
                break;
            }
        }
    }
    float tbc = sum / cnt;
    cout << fixed << setprecision(1) << (float)tbc << endl;
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}