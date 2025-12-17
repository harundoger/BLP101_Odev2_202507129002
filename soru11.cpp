#include <iostream>
using namespace std;

int main() {
    int N;

    // Kullanicidan pozitif bir N tamsayisi alinir
    cout << "Pozitif bir N degeri giriniz: ";
    cin >> N;

    // 1'den N'e kadar olan sayilar for dongusu ile yazdirilir
    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }

    return 0;
}