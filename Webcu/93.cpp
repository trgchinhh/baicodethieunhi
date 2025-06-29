#include <bits/stdc++.h>
#define pb push_back
#define __TruongChinh__ signed main()
using namespace std;

int hmin(vector<int>& numbers){
    int min = *min_element(numbers.begin(), numbers.end());
    return min;
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

    int min = hmin(numbers);
    cout << min << endl;
    
    return 0;    
}