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

__TruongChinh__ {

    string line;
    getline(cin, line);
    istringstream iss(line);
    vector<int> numbers;
    int num;

    while (iss >> num) {
        numbers.push_back(num);
    }

    int count = 0; int check = 0;
    for(int i = 0; i < numbers.size(); i++){
        if(ktra_snt(numbers[i])){
            count ++;
            check = 1;
        }
    }

    if(!check){
        cout << "-" << endl;
        return 0;
    }
    cout << count << endl;
    
    return 0;    
}