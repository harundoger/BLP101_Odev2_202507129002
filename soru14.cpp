#include <iostream>
using namespace std;

int main() {
    int taban, us;
    long long sonuc = 1;   // Us alma islemi icin biriktirici degisken

    // Kullanicidan taban ve us degerleri alinir
    cout << "Taban degerini giriniz: ";
    cin >> taban;

    cout << "Us degerini giriniz: ";
    cin >> us;

    // Negatif us kontrolu
    if (us < 0) {
        cout << "Hata: Negatif us degeri desteklenmemektedir";
    }
    else {
        // Us alma islemi dongu ile yapilir
        for (int i = 1; i <= us; i++) {
            sonuc = sonuc * taban;
        }

        // Sonuc ekrana yazdirilir
        cout << taban << "^" << us << " = " << sonuc;
    }

    return 0;
}