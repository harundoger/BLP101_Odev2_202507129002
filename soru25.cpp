#include <iostream>
using namespace std;

int main() {
    int sayi;
    int ters = 0;   // Sayinin tersini tutacak degisken

    // Kullanicidan tamsayi alinir
    cout << "Bir tamsayi giriniz: ";
    cin >> sayi;

    // Negatif sayi kontrolu (isaret saklanir)
    int isaret = 1;
    if (sayi < 0) {
        isaret = -1;
        sayi = -sayi;
    }

    // Sayinin tersi matematiksel islemlerle bulunur
    while (sayi > 0) {
        int rakam = sayi % 10;        // Son rakam alinir
        ters = ters * 10 + rakam;     // Ters sayi olusturulur
        sayi = sayi / 10;             // Sayi 10'a bolunur
    }

    // Isaret tekrar eklenir
    ters = ters * isaret;

    // Sonuc ekrana yazdirilir
    cout << "Sayinin tersi: " << ters;

    return 0;
}