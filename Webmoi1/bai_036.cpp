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
    float hk1, hk2; cin >> hk1 >> hk2;
    float tbcn = (hk1 + hk2 * 2.0) / 3.0;
    cout << fixed << setprecision(1) << (float)tbcn << endl;
    if(tbcn >= 8){
        cout << "Gioi" << endl;
    } if(tbcn >= 6.5 && tbcn < 8){
        cout << "Kha" << endl;
    } if(tbcn >= 5.0 && tbcn < 6.5){
        cout << "Trung binh" << endl;
    } if(tbcn >= 3.5 && tbcn < 5){
        cout << "Yeu" << endl;
    } if(tbcn < 3.5) {
        cout << "Kem" << endl;
    }
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}