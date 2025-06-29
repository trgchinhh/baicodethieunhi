#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n ; cin >> n;
	double cv = n * 2 * 3.14;
	double dt = n * n * 3.14;
	cout << fixed << setprecision(2) << cv << " " << dt << endl;
}