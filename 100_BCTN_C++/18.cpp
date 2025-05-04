#include <bits/stdc++.h>
using namespace std;

bool kiemTraNamNhuan(int nam) {
    return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}

int soNgayTrongThang(int thang, int nam) {
    if (thang == 2) {
        return kiemTraNamNhuan(nam) ? 29 : 28; 
    }
    if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        return 30; 
    }
    return 31;
}

int main() {
    int thang, nam;
    cin >> thang >> nam;

    cout << soNgayTrongThang(thang, nam) << endl;

    return 0;
}