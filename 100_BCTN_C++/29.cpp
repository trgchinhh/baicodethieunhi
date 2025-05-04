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
	int n; cin >> n;
	if(ktra_snt(n)){
		cout << "Yes" << endl;
	} else cout << "No" << endl;
	return 0; 
}
