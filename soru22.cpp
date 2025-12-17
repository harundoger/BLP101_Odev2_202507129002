#include <iostream>
using namespace std;

int main() {
    int N;

    // Kullanicidan N degeri alinir
    cout << "N degerini giriniz: ";
    cin >> N;

    // Gecersiz giris kontrolu
    if (N <= 0) {
        cout << "Hata: N pozitif bir sayi olmalidir";
    }
    else {
        // Tablo basligi yazdirilir
        cout << "Sayi\tKare\tKup" << endl;
        cout << "------------------------" << endl;

        // 1'den N'e kadar kare ve kupler hesaplanir
        for (int i = 1; i <= N; i++) {
            cout << i << "\t" << (i * i) << "\t" << (i * i * i) << endl;
        }
    }

    return 0;