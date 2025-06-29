#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int solve(int x, int ak, int nk){
	return ak * pow(x, nk);
}

int main(){
	int k, x; cin >> k >> x;
	int sum = 0;
	while(k --> 0){
		int ak, nk; cin >> ak >> nk;
		sum += solve(x, ak, nk);
	}
	cout << sum << endl;
	return 0;
}