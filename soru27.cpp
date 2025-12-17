#include <iostream>
using namespace std;

int main() {

    // 1'den 1000'e kadar olan sayilar kontrol edilir
    cout << "1 ile 1000 arasindaki Armstrong sayilari: " << endl;

    for (int sayi = 1; sayi <= 1000; sayi++) {
        int gecici = sayi;
        int toplam = 0;

        // Sayinin basamaklarinin kupleri toplanir
        while (gecici > 0) {
            int rakam = gecici % 10;          // Son rakam alinir
            toplam = toplam + (rakam * rakam * rakam); // Kup eklenir
            gecici = gecici / 10;             // Sayi 10'a bolunur
        }

        // Armstrong sayi kontrolu
        if (toplam == sayi) {
            cout << sayi << endl;
        }
    }

    return 0;
}