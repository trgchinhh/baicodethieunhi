#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int m, n; cin >> m >> n;
	int count =0, sum = 0;
	for(int i = m; i <= n; i++){
		if(i % 3 == 0 || i % 5 == 0){
			count++;
		}
		if(i % 2 == 0){
			sum += i;
		}
	}
	cout << count << " " << sum << endl;
}