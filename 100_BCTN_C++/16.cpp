#include <bits/stdc++.h>
#define pb push_back
#define __TruongChinh__ signed main()
using namespace std;


__TruongChinh__ {

    int n, m; cin >> n >> m;
    double tbcn = (n + m*2.0)/3.0;
    if(tbcn >= 8) cout << fixed << setprecision(1) << tbcn << endl << "Gioi" << endl;
    else if(tbcn >= 6.5 && tbcn < 8) cout << fixed << setprecision(1) << tbcn << endl << "Kha" << endl;
    else if(tbcn >= 5 && tbcn < 6.5) cout << fixed << setprecision(1) << tbcn << endl << "Trung binh" << endl;
    else if(tbcn >= 3.5 && tbcn < 5) cout << fixed << setprecision(1) << tbcn << endl << "Yeu" << endl;
    else cout << fixed << setprecision(1) << tbcn << endl << "Kem" << endl;

    return 0;
}