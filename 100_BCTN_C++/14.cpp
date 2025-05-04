#include <bits/stdc++.h>
#define pb push_back
#define __TruongChinh__ signed main()
using namespace std;


__TruongChinh__ {

    int n; cin >> n;
    if(n > 0 && n <= 11) cout << "Thieu nhi" << endl;
    else if (n > 11 && n <= 25) cout << "Thieu nien" << endl;
    else if (n > 25 && n <= 50) cout << "Trung nien" << endl;
    else cout << "Lao nien" << endl;

    return 0;
}