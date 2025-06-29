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
    int d; cin >> d;
    if(d >= 80){
        cout << "Loai A" << endl;
        if(d >= 90){
            cout << "Xuat sac" << endl;
        } else if(d >= 80 && d < 90){
            cout << "Gioi" << endl;
        }
    } else if(d >= 50 && d < 80){
        cout << "Loai B" << endl;
        if(d >= 65){
            cout << "Kha" << endl;
        } else if(d >= 50 && d < 65) {
            cout << "Trung binh" << endl;
        }
    } else {
        cout << "Loai C"<< endl;
        if(d >= 35){
            cout << "Yeu" << endl;
        } else cout << "Kem" << endl;
    }
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}