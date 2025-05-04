#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int n; cin >> n;
	int check = 0;
	for(int i = 1; i <= n; i++){
		if(i % 3 == 0){
			cout << i << " ";
			check = 1;
		}
	}

	if(!check){
		cout << "-" << endl;
	}
	return 0;	
}