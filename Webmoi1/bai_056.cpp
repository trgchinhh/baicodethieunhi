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
    int a, b, c; cin >> a >> b >> c;
    if((a + b > c) && (b + c > a) && (c + a > a)){
        cout << "Day la 3 canh cua mot tam giac" << endl;
        float cv = a + b + c;
        float p = cv / 2.0;
        float dt = sqrt(p*(p-a)*(p-b)*(p-c));
        cout << fixed << setprecision(2) << cv << " "
             << fixed << setprecision(1) << dt << endl;
    } else cout << "Day khong phai la 3 canh cua mot tam giac" << endl;
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}