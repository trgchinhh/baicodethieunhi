#include <bits/stdc++.h>
#define pb push_back
#define __TruongChinh__ signed main()
using namespace std;

pair<int, int> max(vector<int>& a){
    int maxarr = 0, max_id = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] > maxarr){
            maxarr = a[i], max_id = i;
        }
    }
    return {maxarr, max_id};
}

pair<int, int> min(vector<int>& a){
    int minarr= 0, min_id = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] < minarr){
            minarr = a[i], min_id = i;
        }
    }
    return {minarr, min_id};
}

__TruongChinh__ {
    
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    auto [maxarr, max_id] = max(a);
    auto [minarr, min_id] = min(a);
    cout << maxarr << " " << max_id << endl;
    cout << minarr << " " << min_id << endl;


    return 0;
}