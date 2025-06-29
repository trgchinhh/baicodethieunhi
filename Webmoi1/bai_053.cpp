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
    int t; cin >> t;
    if(t < 18){
        cout << "Tre em" << endl;
        if(t <= 6){
            cout << "Tre mam non" << endl;
        } else if(t >= 7 && t <= 11){
            cout << "Tre tieu hoc" << endl;
        } else cout << "Tre trung hoc" << endl;
    } else if(t >= 18 && t < 60){
        cout << "Nguoi truong thanh" << endl;
        if(t >= 18 && t < 23){
            cout << "Sinh vien" << endl;
        } else if(t >= 24 && t < 60){
            cout << "Nguoi di lam" << endl;
        }
    } else {
        cout << "Nguoi cao tuoi" << endl;
        if(t >= 60 && t <= 62){
            cout << "Sap nghi huu" << endl;
        } else {
            cout << "Da nghi huu" << endl;
        }
    }
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}