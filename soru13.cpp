#include <iostream>
using namespace std;

int main() {
    int n;
    long long faktoriyel = 1;   // Faktoriyel degeri icin biriktirici degisken

    // Kullanicidan n degeri alinir
    cout << "Bir sayi giriniz: ";
    cin >> n;

    // 0! ve pozitif sayilar icin faktoriyel hesaplama
    if (n < 0) {
        // Negatif sayilarin faktoriyeli tanimsizdir
        cout << "Hata: Negatif sayilarin faktoriyeli hesaplanamaz";
    }
    else {
        // 1'den n'e kadar olan sayilar carpilarak faktoriyel bulunur
        for (int i = 1; i <= n; i++) {
            faktoriyel = faktoriyel * i;
        }

        // Sonuc ekrana yazdirilir
        cout << n << "! = " << faktoriyel;
    }

    return 0;
}