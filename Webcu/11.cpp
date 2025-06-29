#include <bits/stdc++.h>
using namespace std;

int main(){
    int giay; cin >> giay;
    int gio = giay / 3600;
    giay %= 3600;
    int phut = giay / 60;
    giay %= 60;
    cout << gio << ":" << phut << ":" << giay << endl; 
    return 0;
}