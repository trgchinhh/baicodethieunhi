#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ___TruongChinh304___ signed main()

using ll = long long;
using namespace std;

const int C_MAX = 1e5, C_MIN = -1e5, c_INF = 1e9;

void snt(int a[]){
    a[0] = a[1] = 0;
    for(int i = 2; i <= sqrt(C_MAX); i++){
        if(a[i]){
            for(int j = i * i; j < C_MAX; j+=i){
                a[j] = 0;
            }
        }
    }
}
int shh(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0) sum += i;
    }
    if(sum == n) return true;
    else return false;
}

void solve(void){
    int n; cin >> n;
    int a[n], c[C_MAX];
    fill(c, c + C_MAX, 1);
    snt(c);
    for(int &x : a){ 
        cin >> x;
        if(shh(x)) cout << x << " ";
    }    
}

___TruongChinh304___ {
    solve();
    return 0;
}
