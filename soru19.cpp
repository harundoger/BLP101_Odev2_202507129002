#include <iostream>
using namespace std;

int main() {
    int sayi;
    bool asal = true;   // Asal olup olmadigini tutan bayrak degisken

    // Kullanicidan sayi alinir
    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    // 1 ve daha kucuk sayilar asal degildir
    if (sayi <= 1) {
        cout << "Asal Sayi Degildir";
    }
    else {
        // 2'den sayiya kadar bolunme kontrolu yapilir
        for (int i = 2; i < sayi; i++) {
            if (sayi % i == 0) {
                asal = false;   // Bolen bulunursa asal degildir
                break;          // Daha fazla kontrol etmeye gerek yok
            }
        }

        // Sonuca gore ekrana yazdirilir
        if (asal) {
            cout << "Asal Sayidir";
        }
        else {
            cout << "Asal Sayi Degildir";
        }
    }

    return 0;
}