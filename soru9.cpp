#include <iostream>
using namespace std;

int main() {
    double sayi1, sayi2;
    char islem;
    double sonuc;

    // Kullanicidan birinci sayi alinir
    cout << "Birinci sayiyi giriniz: ";
    cin >> sayi1;

    // Kullanicidan islem operatoru alinir
    cout << "Islem operatorunu giriniz (+, -, *, /): ";
    cin >> islem;

    // Kullanicidan ikinci sayi alinir
    cout << "Ikinci sayiyi giriniz: ";
    cin >> sayi2;

    // Girilen operatora gore islem yapilir
    switch (islem) {
        case '+':
            sonuc = sayi1 + sayi2;
            cout << "Sonuc: " << sonuc;
            break;

        case '-':
            sonuc = sayi1 - sayi2;
            cout << "Sonuc: " << sonuc;
            break;

        case '*':
            sonuc = sayi1 * sayi2;
            cout << "Sonuc: " << sonuc;
            break;

        case '/':
            // Bolme isleminde sifira bolme kontrolu
            if (sayi2 == 0) {
                cout << "Hata: Sifira bolunemez";
            } else {
                sonuc = sayi1 / sayi2;
                cout << "Sonuc: " << sonuc;
            }
            break;

        default:
            // Gecersiz operator girilirse
            cout << "Hata: Gecersiz islem operatoru";
    }

    return 0;
}