#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int m, n; cin >> m >> n;
	int sum = 0;
	for(int i = m; i <= n; i++){
		sum += i;
	}
	cout << sum << endl;
	return 0;
}