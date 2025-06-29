#include <bits/stdc++.h>
#define pb push_back
#define __TruongChinh__ signed main()
using namespace std;

bool ktra_snt(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

double httb(vector<int>& numbers){
    double ttb = 0.00, check = 0.00, count = 0.00;
    for(int i = 0; i < numbers.size(); i++){
        if(ktra_snt(numbers[i])){
            ttb += numbers[i];
            check = 1;
            count ++;
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
        cout << fixed << setprecision(2) << tb << endl;
    } else {
        cout << "-" << endl;
    }
    
    return 0;    
}