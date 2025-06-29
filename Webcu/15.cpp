#include <bits/stdc++.h>
#define pb push_back
#define __TruongChinh__ signed main()
using namespace std;


__TruongChinh__ {

    int a, b, c; cin >> a >> b >> c;
    if(a+b>c && b+c>a && c+a>b){
        double cv = a + b + c;
        double s = (a+b+c)/2.0;
        double dt = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "Day la 3 canh cua mot tam giac" << endl;
        cout << fixed << setprecision(2) << cv << " ";
        cout << fixed << setprecision(1) << dt << endl;
    } else cout << "Day khong phai la 3 canh cua mot tam giac" << endl;

    return 0;
}