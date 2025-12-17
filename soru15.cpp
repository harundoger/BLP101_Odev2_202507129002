#include <iostream>
using namespace std;

int main() {
    int N;
    double sayi, toplam = 0.0, ortalama;

    // Kullanicidan kac adet sayi girilecegi alinir
    cout << "Kac adet sayi gireceksiniz? ";
    cin >> N;

    // Gecersiz giris kontrolu
    if (N <= 0) {
        cout << "Hata: Sayi adedi pozitif olmalidir";
    }
    else {
        // N adet sayi kullanicidan dongu ile alinir
        for (int i = 1; i <= N; i++) {
            cout << i << ". sayiyi giriniz: ";
            cin >> sayi;
            toplam = toplam + sayi;   // Girilen sayi toplama eklenir
        }

        // Aritmetik ortalama hesaplanir
        ortalama = toplam / N;

        // Sonuc ekrana yazdirilir
        cout << "Girilen sayilarin aritmetik ortalamasi: " << ortalama;
    }

    return 0;
}