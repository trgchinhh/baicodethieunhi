#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ___TruongChinh304___ signed main()
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

using ll = long long;
using namespace std;

const int C_MAX = 1e5, C_MIN = -1e5, c_INF = 1e9;

bool tamgiac(int a, int b, int c){
    return (a + b > c) && (a + c > b) && (b + c > a);
}

bool vuong(int a, int b, int c) {
    int x = a, y = b, z = c;
    if (x > y) swap(x, y);
    if (y > z) swap(y, z);
    if (x > y) swap(x, y);
    return x * x + y * y == z * z;
}

void c_solve(void){
    int a, b, c;
    cin >> a >> b >> c;

    if (!tamgiac(a, b, c)) {
        cout << "No\n";
    } else {
        cout << "Yes\n";

        if (a == b && b == c)
            cout << "Deu\n";
        else if (a == b || b == c || a == c)
            cout << "Can\n";
        else if (vuong(a, b, c))
            cout << "Vuong\n";
        else
            cout << "Thuong\n";
    }
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}