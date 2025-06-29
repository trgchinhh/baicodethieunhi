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
    int n;
    vector<int> vec;
    while(cin >> n){
        vec.push_back(n);
    }
    sort(vec.begin(), vec.end());
    int cnt = 1, max = C_MIN;;
    for(int i = 0; i < vec.size(); i++){
        if(vec[0] == vec[i]){
            cnt++;
            if(cnt == vec.size()){
                cout << "=" << endl;
                return;
            }
        }   
        if(vec[i] > max){
            max = vec[i];
        }
    }
    cout << max << endl;
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}