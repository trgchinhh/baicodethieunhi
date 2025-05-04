#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int a, b; cin >> a >> b;
	int max = -1e9;
	for(int i = 1; i <= a; i++){
		if((a % i == 0 && b % i == 0) && i > max){
			max = i;
		}
	}
	cout << max << endl;
	return 0;
}