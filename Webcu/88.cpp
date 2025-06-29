#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int tim_ucln(int n, int m){
	int ucln = -1; 
	for(int i = 1; i <= n; i++){
		if(n % i == 0 && m % i == 0){
			ucln = i;
		}
	}
	return ucln;
}

int main(){
	int n, m; cin >> n >> m;
	int ucln = tim_ucln(n, m);
	cout << (n / ucln) << "/" << (m / ucln) << endl;
	return 0;
}