#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int n; cin >> n;
	int a[n];
	int sum = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i]; 
	}	
	cout << sum << endl;
	return 0;
}