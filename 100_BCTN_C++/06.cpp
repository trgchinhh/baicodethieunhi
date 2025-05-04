#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	double n, m, b; cin >> n >> m >> b;
	double cv = n + m + b;
	double p = cv / 2.00;
	double dt = sqrt(p*(p-n)*(p-m)*(p-b));
	cout << fixed << setprecision(1) << cv << " "
		 << fixed << setprecision(3) << dt << endl;
	return 0;	 
}