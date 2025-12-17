#include <iostream>
using namespace std;

int main() {
    int sayi1, sayi2;
    int ebob = 1;   // En Buyuk Ortak Boleni tutacak degisken

    // Kullanicidan iki sayi alinir
    cout << "Birinci sayiyi giriniz: ";
    cin >> sayi1;

    cout << "Ikinci sayiyi giriniz: ";
    cin >> sayi2;

    // Negatif sayilar icin mutlak deger alinir
    if (sayi1 < 0) {
        sayi1 = -sayi1;
    }
    if (sayi2 < 0) {
        sayi2 = -sayi2;
    }

    // Kucuk olan sayi bulunur
    int kucuk;
    if (sayi1 < sayi2) {
        kucuk = sayi1;
    } else {
        kucuk = sayi2;
    }

    // 1'den kucuk sayiya kadar ortak bolenler kontrol edilir
    for (int i = 1; i <= kucuk; i++) {
        if (sayi1 % i == 0 && sayi2 % i == 0) {
            ebob = i;   // Ortak bolen bulunursa ebob guncellenir
        }
    }

    // Sonuc ekrana yazdirilir
    cout << "EBOB: " << ebob;

    return 0;
}