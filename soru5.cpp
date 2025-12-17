#include <iostream>
using namespace std;

int main() {
    int sayi;

    cout << "Bir tamsayi giriniz: ";
    cin >> sayi;

    if (sayi % 3 == 0 && sayi % 7 == 0) { // Hem 3'e hem 7'ye bolunme durumu kontrol edilir
        cout << "Mukemmel Kat";
    }
    // Sadece birine bolunme durumu
    else if (sayi % 3 == 0 || sayi % 7 == 0) {
        cout << "Kismi Kat";
    }
    // Hicbirine bolunmuyorsa
    else {
        cout << "Bolunemez";
    }

    return 0;
}