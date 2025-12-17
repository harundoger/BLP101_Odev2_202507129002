#include <iostream>
using namespace std;

int main() {
    int sayi;

    // Kullanicidan pozitif tamsayi alinir
    cout << "Bir pozitif tamsayi giriniz: ";
    cin >> sayi;

    // Gecersiz giris kontrolu
    if (sayi <= 1) {
        cout << "Asal carpanlara ayirma icin 1'den buyuk bir sayi giriniz";
    }
    else {
        cout << "Asal carpanlar: ";

        int bolen = 2;  // En kucuk asal sayidan baslanir

        // Sayi 1 olana kadar bolme islemi devam eder
        while (sayi > 1) {
            if (sayi % bolen == 0) {
                // Bolunebiliyorsa bolen yazdirilir ve sayi bolunur
                cout << bolen << " ";
                sayi = sayi / bolen;
            }
            else {
                // Bolunemiyorsa bolen 1 artirilir
                bolen++;
            }
        }
    }

    return 0;
}