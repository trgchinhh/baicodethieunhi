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
	vector<int> a;
	for(int i = 2; i <= Max; i++){
		if(ktra_snt(i)){
			a.push_back(i);
			if(a.size() == n){
				break;
			}
		}
	}
	for(int x : a){
		cout << x << " ";
	}
	return 0;
} 