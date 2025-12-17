#include <iostream>
using namespace std;

int main() {
    int kenar1, kenar2, kenar3;

    // Kullanicidan ucgenin uc kenar uzunlugu alinir
    cout << "Birinci kenari giriniz: ";
    cin >> kenar1;

    cout << "Ikinci kenari giriniz: ";
    cin >> kenar2;

    cout << "Ucuncu kenari giriniz: ";
    cin >> kenar3;

    // Ucgen esitsizligi kontrolu
    if (kenar1 + kenar2 > kenar3 &&
        kenar1 + kenar3 > kenar2 &&
        kenar2 + kenar3 > kenar1) { // Iki kenarin toplami ucuncu kenardan buyuk olmalidir

        // Ucgen turu belirleme
        if (kenar1 == kenar2 && kenar2 == kenar3) {
            cout << "Ucgen Turu: Eskenar";
        }
        else if (kenar1 == kenar2 || kenar1 == kenar3 || kenar2 == kenar3) {
            cout << "Ucgen Turu: Ikizkenar";
        }
        else {
            cout << "Ucgen Turu: Cesitkenar";
        }
    }
    else {
        // Ucgen esitsizligi saglanmiyorsa
        cout << "Ucgen Olusmaz";
    }

    return 0;
}