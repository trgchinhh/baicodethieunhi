#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

float chuvi(int a, int b, int c){
	return a + b + c;
}

double dientich(int a, int b, int c){
	float p = chuvi(a, b, c) / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main(){
	int a, b, c; cin >> a >> b >> c;
	cout << fixed << setprecision(1) << chuvi(a, b, c) << endl;
	cout << fixed << setprecision(3) << dientich(a, b, c) << endl;
	return 0;
}