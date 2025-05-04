#include <bits/stdc++.h>
#define ll long long
#define ___TruongChinh___ signed main()
using namespace std;


___TruongChinh___ {

    int n; cin >> n;
    int tam = n - 1; int tien_km_dau = 12000;
    int tong_tien ;
    if(tam > 29){
        int kmthu31 = tam - 29;
        tong_tien = 29 * 10000 + kmthu31 * 9000 + tien_km_dau; 
    } else {
        tong_tien = tam * 10000 + tien_km_dau;
    }
    cout << tong_tien << endl;
    
    return 0;    
}