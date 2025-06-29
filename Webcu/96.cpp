#include <bits/stdc++.h>
#define pb push_back
#define __TruongChinh__ signed main()
using namespace std;

pair<double, int> hamcon(vector<int>& numbers) {
    double sumc = 0.0;
    int count = 0;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0) { 
            sumc += numbers[i];
            count++;
        }
    }
    return {sumc, count};
}

__TruongChinh__ {
    int n;
    cin >> n; 
    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i]; 
    }

    auto [sum, count] = hamcon(numbers);

    if (count == 0) {
        cout << "0.00" << endl; 
    } else {
        double avg = sum / count; 
        cout << fixed << setprecision(2) << avg << endl;
    }

    return 0;
}