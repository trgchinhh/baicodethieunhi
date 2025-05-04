#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define __TruongChinh__ signed main()
using namespace std;


__TruongChinh__ {

    int n; cin >> n;
    if(n == 2 || n == 3 || n == 4) cout << "Mua Xuan" << endl;
    else if(n == 5 || n == 6|| n ==7) cout << "Mua Ha" << endl;
    else if(n == 8 || n == 9|| n ==10) cout << "Mua Thu" << endl;
    else if(n == 11|| n == 12|| n == 1) cout << "Mua Dong" << endl;
    
    return 0;
}