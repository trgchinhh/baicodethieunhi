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

	int max = -1e9, max_vl = -1e9;
	for(auto x : mp){
		if(x.second > max){
			max = x.second;
			max_vl = x.first;
		}
	}
	cout << max_vl << " " << max << endl;
	return 0;
}