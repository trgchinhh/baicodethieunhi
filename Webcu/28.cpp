#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int n; cin >> n;
	int count = 0;
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}