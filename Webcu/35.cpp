#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int ktra_snt(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int m, n; cin >> m >> n;
	double sum = 0, count = 0;
	for(int i = m; i <= n; i++){
		if(ktra_snt(i)){
			sum += i;
			count++;
		}
	}
	double tbc = sum / count;
	cout << fixed << setprecision(2) << tbc << endl; 
	return 0;
}