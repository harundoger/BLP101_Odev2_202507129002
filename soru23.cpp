#include <iostream>
using namespace std;

int main() {
    int N;
    long long a = 0, b = 1, c;   // Fibonacci serisinin ilk iki terimi

    // Kullanicidan N degeri alinir
    cout << "Fibonacci serisinin kac terimi yazdirilsin? ";
    cin >> N;

    // Gecersiz giris kontrolu
    if (N <= 0) {
        cout << "Hata: N pozitif bir sayi olmalidir";
    }
    else {
        cout << "Fibonacci Serisi: ";

        // Ilk N terim dongu ile yazdirilir
        for (int i = 1; i <= N; i++) {
            if (i == 1) {
                cout << a << " ";
            }
            else if (i == 2) {
                cout << b << " ";
            }
            else {
                c = a + b;   // Onceki iki sayinin toplami
                cout << c << " ";
                a = b;       // Degerler guncellenir
                b = c;
            }
        }
    }

    return 0;
}