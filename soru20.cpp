#include <iostream>
using namespace std;

int main() {
    int sayi;

    // Kullanicidan tamsayi alinir
    cout << "Bir tamsayi giriniz: ";
    cin >> sayi;

    // Negatif sayilar icin mutlak deger alinir
    if (sayi < 0) {
        sayi = -sayi;
    }

    // 0 icin ozel durum
    if (sayi == 0) {
        cout << "0'in pozitif tam boleni yoktur";
    }
    else {
        cout << "Pozitif tam bolenler: ";

        // 1'den sayiya kadar bolenler kontrol edilir
        for (int i = 1; i <= sayi; i++) {
            if (sayi % i == 0) {
                cout << i << " ";
            }
        }
    }

    return 0;
}