#include <bits/stdc++.h>
#define pb push_back
#define __TruongChinh__ signed main()
using namespace std;


__TruongChinh__ {

    float n; cin >> n;
    vector<int> a(n);
    float sum = 0.0;
    for(int i = 0; i < n; i++){
        cin >> a[i]; sum += a[i];
    }
    float tbt = sum / n;
    cout << fixed << setprecision(1) << tbt << endl;

    return 0;
}