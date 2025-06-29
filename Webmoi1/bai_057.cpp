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
    int a, b; cin >> a >> b;

    if (a > 0 && b > 0) {
        cout << "Day la 2 kich thuoc cua mot hinh chu nhat" << endl;
        int chu_vi = 2 * (a + b);
        int dien_tich = a * b;
        cout << chu_vi << " " << dien_tich << endl;
    } else {
        cout << "Day khong phai la 2 kich thuoc cua mot hinh chu nhat" << endl;
        if (a <= 0 && b <= 0) {
            cout << "a va b la so am" << endl;
        } else if (a <= 0) {
            cout << "a la so am" << endl;
        } else {
            cout << "b la so am" << endl;
        }
    }

}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}