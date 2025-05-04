#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int ai;
	set<int> se;
	while(cin >> ai){
		se.insert(ai);
	}	
	cout << se.size() << endl;
	return 0;
}