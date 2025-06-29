#include <bits/stdc++.h>
#define pb push_back
#define __TruongChinh__ signed main()
using namespace std;

bool ktra_scp(int n){
    for(int i = 0; i <= n; i++){
        if(i == sqrt(n)) return true;
    }
    return false;
}

double httb(vector<int>& numbers){
    double ttb = 0.0, count = 0.0, check = 0; 
    for(int i = 0; i < numbers.size(); i++){
        if(ktra_scp(numbers[i])){
            ttb += numbers[i], count ++;
            check = 1;
        }
    }

    if(!check){
        return 0;
    } else {
        double tb = ttb / count;
        return tb;
    }
}

__TruongChinh__ {

    string line;
    getline(cin, line);
    istringstream iss(line);
    vector<int> numbers;
    int num;

    while (iss >> num) {
        numbers.push_back(num);
    }

    if(httb(numbers)){
        double tb = httb(numbers);
        cout << fixed << setprecision(1) << tb << endl;
    } else cout << "-" << endl;
    
    return 0;    
}