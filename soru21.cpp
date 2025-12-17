#include <iostream>
using namespace std;

int main() {
    int sayi;
    int toplam = 0;   // Kendisi haric bolenlerin toplamini tutar

    // Kullanicidan sayi alinir
    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    // Mükemmel sayi tanimi 1'den buyuk dogal sayilar icin gecerli
    if (sayi <= 1) {
        cout << "Mukemmel Sayi Degildir";
    }
    else {
        // 1'den sayinin yarisina kadar bolenler kontrol edilir
        for (int i = 1; i <= sayi / 2; i++) {
            if (sayi % i == 0) {
                toplam = toplam + i;   // Bolen toplama eklenir
            }
        }

        // Bolenler toplami sayinin kendisine esit mi kontrol edilir
        if (toplam == sayi) {
            cout << "Mukemmel Sayi";
        }
        else {
            cout << "Mukemmel Sayi Degildir";
        }
    }

    return 0;
}