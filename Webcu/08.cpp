#include <bits/stdc++.h>

using ll = long long;
using namespace std;

const int Max = 1e5, Inf = 1e9;

int main(){
	int a, b, c; cin >> a >> b >> c;
	double p = (a+b+c) / 2.00;
	double s = sqrt(p*(p-a)*(p-b)*(p-c));
	double R = (a*b*c)/(4*s);
	cout << fixed << setprecision(3) << R << endl;
	return 0;
}