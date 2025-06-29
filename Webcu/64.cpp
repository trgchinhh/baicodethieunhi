#include <bits/stdc++.h>
#define pb push_back
#define __TruongChinh__ signed main()
using namespace std;

__TruongChinh__ {

    string str;
    getline(cin, str); 
    for(char c : str){
        if(c != ' ') cout << c;
    }
    return 0;
}