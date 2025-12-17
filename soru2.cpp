#include <iostream>
using namespace std;

int main() {
    int sayi;

    cout << "Bir tamsayi giriniz: ";
    cin >> sayi;

    // 2 ile bolumunden kalan kontrol edilir
    if (sayi % 2 == 0) {
        cout << "Cift";
    }
    else {
        cout << "Tek";
    }

    return 0;
}