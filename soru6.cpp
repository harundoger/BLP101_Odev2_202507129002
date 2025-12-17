#include <iostream>
using namespace std;

int main() {
    double tutar, indirimOrani = 0.0, netTutar;

    cout << "Alisveris tutarini giriniz (TL): ";
    cin >> tutar;

    // Tutar araligina gore indirim orani belirlenir
    if (tutar >= 0 && tutar < 100) {
        indirimOrani = 0.0;
    }
    else if (tutar >= 100 && tutar < 200) {
        indirimOrani = 0.10;
    }
    else if (tutar >= 200) {
        indirimOrani = 0.20;
    }

    // Net tutar hesaplanir
    netTutar = tutar - (tutar * indirimOrani);

    cout << "Uygulanan indirim orani: %" << indirimOrani * 100 << endl;
    cout << "Odenecek net tutar: " << netTutar << " TL";

    return 0;
}