#include <iostream>
using namespace std;

int main() {
    int sayi, ters = 0, orijinalSayi;

    // Kullanicidan tamsayi alinir
    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    // Sayiyi orijinal haliyle saklayalim
    orijinalSayi = sayi;

    // Sayinin tersi hesaplanir
    while (sayi > 0) {
        int rakam = sayi % 10;      // Son rakam alinir
        ters = ters * 10 + rakam;   // Ters sayi olusturulur
        sayi = sayi / 10;           // Sayi 10'a bolunur
    }

    // Sayinin tersi ile orijinal sayi karsilastirilir
    if (orijinalSayi == ters) {
        cout << "Palindrom Sayidir";
    }
    else {
        cout << "Palindrom Sayisi Degildir";
    }

    return 0;
}