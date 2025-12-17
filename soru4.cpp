#include <iostream>
using namespace std;

int main() {
    int vize, final;
    double ortalama;

    cout << "Vize notunu giriniz: ";
    cin >> vize;

    cout << "Final notunu giriniz: ";
    cin >> final;

    ortalama = vize * 0.40 + final * 0.60; // Yil sonu ortalamasi hesaplanir

    cout << "Yil sonu ortalamasi: " << ortalama << endl;

    // Ortalama degerine gore harf notu belirlenir
    if (ortalama >= 90) {
        cout << "Harf Notu: AA";
    }
    else if (ortalama >= 85) {
        cout << "Harf Notu: BA";
    }
    else if (ortalama >= 80) {
        cout << "Harf Notu: BB";
    }
    else if (ortalama >= 50) {
        cout << "Durum: Gecer";
    }
    else {
        cout << "Durum: Kaldi";
    }

    return 0;
}