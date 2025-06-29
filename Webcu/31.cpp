#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int m, n; cin >> m >> n;
	int count = 0;
	for(int i = m; i <= n; i++){
		if(i % 3 == 0){
			count++;
		}
	}	
	cout << count << endl;
	return 0;
}