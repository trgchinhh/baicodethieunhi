#include <bits/stdc++.h>
using namespace std;

int cong(int a, int b) {
    return a + b;
}

float chia(float a, float b) {
    return a / b;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = cong(a, cong(b, c));  
    float division1 = chia(a, b + c);  
    float division2 = chia(a, b) + c;  

    cout << sum << " " << fixed << setprecision(2) << division2 << " " << fixed << setprecision(3) << division1 << endl;
    return 0;
}