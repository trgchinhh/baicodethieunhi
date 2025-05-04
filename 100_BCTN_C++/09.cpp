#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int toan, van, anh; cin >> toan >> van >> anh;
	double diemtb = (toan*2 + van*2 + anh) / 5.0;
	cout << fixed << setprecision(1) << diemtb << endl;	
	return 0;
}