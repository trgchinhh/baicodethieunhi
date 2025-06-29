#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int Cnk(int n, int k){
	int n_giai_thua = 1;
	for(int i = 1; i <= n; i++){
		n_giai_thua *= i;
	}

	int k_giai_thua = 1;
	for(int i = 1; i <= k; i++){
		k_giai_thua *= i;
	}

	int n_tru_k_giai_thua = 1;
	for(int i = 1; i <= n - k; i++){
		n_tru_k_giai_thua *= i;
	}

	int C = n_giai_thua / (k_giai_thua * n_tru_k_giai_thua);
	return C;
}

int main(){
	int m; cin >> m;
	int sum = 0;
	while(m --> 0){
		int n, k; cin >> n >> k;
		sum += Cnk(n, k);
	}
	cout << sum << endl;
	return 0;
}