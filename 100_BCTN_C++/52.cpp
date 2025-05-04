#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int ktra_snt(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int ai;
	double sum = 0.00, count = 0.00;
	while(cin >> ai){
		if(ktra_snt(ai)){
			sum += ai;
			count++;
		}
	}
	double tbc = sum / count;
	cout << fixed << setprecision(2) << tbc << endl;
	return 0;
}