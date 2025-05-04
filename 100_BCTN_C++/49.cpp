#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int n; cin >> n;
	int a[n];
	int max = -1e9, max_id = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] > max){
			max = a[i];
			max_id = i;  
		}
	}
	cout << max << " " << max_id << endl;
	return 0;
}