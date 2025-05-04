#include <bits/stdc++.h>
using namespace std;

int main(){
    int so; cin >> so;
    int hai_so_dau = so / 10;
    int hai_so_cuoi = so % 100;
    cout << setw(2) << setfill('0') << hai_so_dau << " " << setw(2) << setfill('0') << hai_so_cuoi << endl;
    return 0;
}
