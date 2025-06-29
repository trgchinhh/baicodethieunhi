#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

string ktra_chia_cho_5(int n){
	if(n % 5 == 0){
		return "Yes";
	} else return "No";
}

int main(){
	int n; cin >> n;
	cout << ktra_chia_cho_5(n) << endl;
	return 0;
}