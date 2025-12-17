#include <iostream>
using namespace std;

int main() {
    int baslangic, bitis;

    // Kullanicidan baslangic ve bitis degerleri alinir
    cout << "Baslangic degerini giriniz: ";
    cin >> baslangic;

    cout << "Bitis degerini giriniz: ";
    cin >> bitis;

    // Baslangic degeri bitis degerinden buyukse yer degistirilir
    if (baslangic > bitis) {
        int gecici = baslangic;
        baslangic = bitis;
        bitis = gecici;
    }

    // Belirtilen aralikta 5'e tam bolunen sayilar yazdirilir
    cout << "5'e tam bolunen sayilar: ";

    for (int i = baslangic; i <= bitis; i++) {
        if (i % 5 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}