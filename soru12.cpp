#include <iostream>
using namespace std;

int main() {
    int N;
    int toplam = 0;   // Biriktirici (accumulator) degisken

    // Kullanicidan N degeri alinir
    cout << "Pozitif bir N degeri giriniz: ";
    cin >> N;

    // 1'den N'e kadar olan sayilarin toplami hesaplanir
    for (int i = 1; i <= N; i++) {
        toplam = toplam + i;   // Her adimda i degeri toplama eklenir
    }

    // Sonuc ekrana yazdirilir
    cout << "1 ile " << N << " arasindaki sayilarin toplami: " << toplam;

    return 0;
}