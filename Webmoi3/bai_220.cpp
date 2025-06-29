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
    int n, m; cin >> n >> m;
    int a[n][m];
    int am_max = C_MIN;
    int check = 0; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            if(a[i][j] < 0 && a[i][j] > am_max){
                am_max = a[i][j];
                check = 1;
            }
        }
    }
    int h = 0, c = 0;
    int check2 = false; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == am_max){
                h = i, c = j;
                check2 = true;
                break;
            }
        }
        if(check2){
            break;
        }
    }
    if(!check){
        cout << 0 << endl;
        return; 
    }
    cout << am_max << endl << h << " " << c << endl;
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}