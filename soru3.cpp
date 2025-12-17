#include <iostream>
using namespace std;

int main() {
    int sayi1, sayi2, sayi3;

    // Kullanıcıdan üç farkli tamsayi alinir
    cout << "Birinci tamsayiyi giriniz: ";
    cin >> sayi1;

    cout << "Ikinci tamsayiyi giriniz: ";
    cin >> sayi2;

    cout << "Ucuncu tamsayiyi giriniz: ";
    cin >> sayi3;

    // En buyuk sayi karsilastirma ile bulunur
    if (sayi1 > sayi2 && sayi1 > sayi3) {
        cout << "En buyuk sayi: " << sayi1;
    }
    else if (sayi2 > sayi1 && sayi2 > sayi3) {
        cout << "En buyuk sayi: " << sayi2;
    }
    else {
        cout << "En buyuk sayi: " << sayi3;
    }

    return 0;
}