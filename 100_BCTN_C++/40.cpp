#include <bits/stdc++.h>
#define pb push_back
#define __TruongChinh__ signed main()
using namespace std;


__TruongChinh__ {

    int n; cin >> n;
    vector<int> scp;
    for(int i = 0; i < n*n; i++){
        if(scp.size() < n) scp.pb(i*i);
    }

    for(int x : scp){
        cout<< x << " " ;
    }

    return 0;
}