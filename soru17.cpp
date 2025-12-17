#include <iostream>
using namespace std;

int main() {
    int sayi;
    int rakam, toplam = 0;   // Rakam ve rakamlar toplamini tutan degiskenler

    // Kullanicidan pozitif tamsayi alinir
    cout << "Pozitif bir tamsayi giriniz: ";
    cin >> sayi;

    // Pozitiflik kontrolu
    if (sayi < 0) {
        cout << "Hata: Pozitif bir sayi giriniz";
    }
    else {
        // Sayi 0 ise rakamlar toplami 0'dır
        if (sayi == 0) {
            toplam = 0;
        }

        // Rakamlar toplami hesaplanir
        while (sayi > 0) {
            rakam = sayi % 10;     // Son rakam alinir
            toplam = toplam + rakam; // Rakam toplama eklenir
            sayi = sayi / 10;      // Sayi 10'a bolunur
        }

        // Sonuc ekrana yazdirilir
        cout << "Rakamlar toplami: " << toplam;
    }

    return 0;
}