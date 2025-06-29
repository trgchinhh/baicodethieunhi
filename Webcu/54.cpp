#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int ai;
	int max = -1e9;
	while(cin >> ai){
		if(ai < 0 && ai > max){
			max = ai;
		}
	}
	cout << max << endl;
	return 0;
}