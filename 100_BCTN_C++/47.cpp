#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int n; cin >> n;
	vector<int> duong;
	vector<int> am;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		if(x > 0) duong.push_back(x);
		else am.push_back(x);
	}
	cout << duong.size() << " " << am.size() << endl;
	for(int x : duong) cout << x << " ";
	for(int x : am) cout << x << " ";
	return 0;
}