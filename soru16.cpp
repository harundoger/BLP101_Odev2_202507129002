#include <iostream>
using namespace std;

int main() {
    int sayi;
    int basamakSayisi = 0;   // Basamak sayisini tutan sayac

    // Kullanicidan tamsayi alinir
    cout << "Bir tamsayi giriniz: ";
    cin >> sayi;

    // Sayi 0 ise basamak sayisi 1'dir
    if (sayi == 0) {
        basamakSayisi = 1;
    }
    else {
        // Negatif sayilar icin mutlak deger alinir
        if (sayi < 0) {
            sayi = -sayi;
        }

        // Sayi 10'a bolunerek basamak sayisi bulunur
        while (sayi > 0) {
            sayi = sayi / 10;
            basamakSayisi++;
        }
    }

    // Sonuc ekrana yazdirilir
    cout << "Girilen sayinin basamak sayisi: " << basamakSayisi;

    return 0;
}