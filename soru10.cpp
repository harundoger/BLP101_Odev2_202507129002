#include <iostream>
using namespace std;

int main() {
    int x, y;

    // Kullanicidan x ve y koordinatlari alinir
    cout << "x degerini giriniz: ";
    cin >> x;

    cout << "y degerini giriniz: ";
    cin >> y;

    // Once orijin kontrolu yapilir
    if (x == 0 && y == 0) {
        cout << "Orijin";
    }
    // Eksenler uzerinde olma durumu
    else if (x == 0 || y == 0) {
        cout << "Eksen Uzerinde";
    }
    // 1. Bolge: x > 0, y > 0
    else if (x > 0 && y > 0) {
        cout << "1. Bolge";
    }
    // 2. Bolge: x < 0, y > 0
    else if (x < 0 && y > 0) {
        cout << "2. Bolge";
    }
    // 3. Bolge: x < 0, y < 0
    else if (x < 0 && y < 0) {
        cout << "3. Bolge";
    }
    // 4. Bolge: x > 0, y < 0
    else {
        cout << "4. Bolge";
    }

    return 0;
}