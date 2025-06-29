#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int hs, tao; cin >> tao >> hs;
	int tao_duoc_chia = tao / hs;
	int phan_du = tao % hs;
	cout << tao_duoc_chia << " " << phan_du << endl;
	return 0;
}