#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int n; cin >> n;
	int a[n];
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}	
	for(auto x : mp){
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}

