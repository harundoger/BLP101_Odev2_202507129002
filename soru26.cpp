#include <iostream>
using namespace std;

int main() {
    int sayi;

    // Kullanicidan pozitif tamsayi alinir
    cout << "Pozitif bir tamsayi giriniz: ";
    cin >> sayi;

    // Gecersiz giris kontrolu
    if (sayi <= 0) {
        cout << "Hata: Pozitif bir sayi girilmelidir";
    }
    else {
        cout << "Collatz Adimlari: " << endl;

        // Sayi 1 olana kadar islemler devam eder
        while (sayi != 1) {
            cout << sayi << " ";

            if (sayi % 2 == 0) {
                // Sayi cift ise 2'ye bolunur
                sayi = sayi / 2;
            }
            else {
                // Sayi tek ise 3 ile carpilip 1 eklenir
                sayi = sayi * 3 + 1;
            }
        }

        // Son olarak 1 yazdirilir
        cout << sayi;
    }

    return 0;
}