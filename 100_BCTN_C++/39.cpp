#include <bits/stdc++.h>
#define pb push_back
#define __TruongChinh__ signed main()
using namespace std;

bool ktra_scp(int n){
    for(int i = 0; i <= sqrt(n); i++){
        if(i * i == n) return true;
    }
    return false;
}

__TruongChinh__ {

    int n; cin >> n;
    if(ktra_scp(n)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;    
}