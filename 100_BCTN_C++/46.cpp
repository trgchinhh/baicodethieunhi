#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int n, x; cin >> n >> x;
	int a[n];
	int check = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] == x){
			cout << "Yes" << endl << i << endl;
			check = 1;
			break;
		}
	}
	if(!check){
		cout << "No" << endl;
	}
	return 0;
}