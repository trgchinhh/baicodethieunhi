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
    double P = (21.0 * a * a + 5.0 * b * b) / (2009.0 * c * c + 15.0);
    double under = double(a) * a - 2.0 * b;
    double Q = sqrt(under) / (3.0 * c * c + 4.0);;
    cout << fixed << setprecision(4) << P << " ";
    cout << fixed << setprecision(4) << Q << "\n";
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}