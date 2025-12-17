#include <iostream>
using namespace std;

int main() {
    int sayi;

    cout << "Bir tamsayi giriniz: ";
    cin >> sayi;

    // Sayinin isaret durumu kontrol edilir
    if (sayi > 0) {
        cout << "Pozitif";
    }
    else if (sayi < 0) {
        cout << "Negatif";
    }
    else {
        cout << "Notr";
    }

    return 0;
}