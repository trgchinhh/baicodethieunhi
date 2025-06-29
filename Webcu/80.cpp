#include <bits/stdc++.h>
#define pb push_back
#define __TruongChinh__ signed main()
using namespace std;


__TruongChinh__ {
    string str;
    getline(cin, str);
    string x ;
    getline(cin, x);
    size_t vtdt = str.find(x);
    if(vtdt != string::npos){
        cout << vtdt << endl;
    } else cout << -1 << endl;
    return 0;
}