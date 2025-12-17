#include <iostream>
using namespace std;

int main() {
    int sayi;
    long long ikili = 0;   // Ikili sayiyi ters olarak tutacak degisken
    int basamak = 1;       // 10'un kuvvetlerini kontrol etmek icin

    // Kullanicidan pozitif onluk tabanda sayi alinir
    cout << "Onluk tabanda pozitif bir sayi giriniz: ";
    cin >> sayi;

    // Gecersiz giris kontrolu
    if (sayi < 0) {
        cout << "Hata: Pozitif bir sayi giriniz";
    }
    else if (sayi == 0) {
        // 0'in ikili karsiligi
        cout << "Ikili (Binary) karsiligi: 0";
    }
    else {
        // Onluk tabandan ikili tabana cevirme
        while (sayi > 0) {
            int kalan = sayi % 2;           // 2'ye bolumden kalan (0 veya 1)
            ikili = ikili + (kalan * basamak);
            basamak = basamak * 10;         // Bir sonraki basamak
            sayi = sayi / 2;                // Sayi 2'ye bolunur
        }

        // Sonuc ekrana yazdirilir
        cout << "Ikili (Binary) karsiligi: " << ikili;
    }

    return 0;
}